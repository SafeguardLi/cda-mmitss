from MMITSSConsumer import *
from confluent_kafka import Producer
import json
from unittest.mock import MagicMock

def testSRM():
    
    #read KafkaConfig file
    fileName = 'kafkaConfig.json'
    f = open(fileName,"r")
    kafkaConfig  = json.loads(f.read())
    f.close()
    
    # Mock the Kafka consumer to avoid actually sending messages
    
    consumer = MMITSSConsumer("SRM",consumerConfigFilename = "kafkaConfig.json",socketConfigFilename = "mmitss-phase3-master-config.json")
    
    
    #create Kafka Producer message 
    producerConfig = {"bootstrap.servers":kafkaConfig["BOOTSTRAP_SERVER"]}
    producer = Producer(producerConfig)
    
    #read bsm json file
    fileName = 'srm.json'
    f = open(fileName,"r")
    dataSRM  = json.dumps(json.loads(f.read()))
    f.close()

    #send message

    producer.produce(kafkaConfig["CONSUMER_TOPICS"]["SRM"],dataSRM)
    producer.flush()

    #receive message and broadcast back to MMITSS
    assert(consumer.broadcastMsg(debug=True)==1)

    # # Assert that the Producer instance was created with the correct arguments
    # producerMock.assert_called_once_with(producerConfig)

    # # Assert that the produce method was called with the expected arguments
    # producerInstance = producerMock.return_value
    # producerInstance.produce.assert_called_once_with(producerTopic,dataSPaT)
