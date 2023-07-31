// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ITISIncidentResponseEquipment.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GROUND_FIRE_SUPPRESSION'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__GROUND_FIRE_SUPPRESSION = 9985
};

/// Constant 'HEAVY_GROUND_EQUIPMENT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HEAVY_GROUND_EQUIPMENT = 9986
};

/// Constant 'AIRCRAFT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__AIRCRAFT = 9988
};

/// Constant 'MARINE_EQUIPMENT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__MARINE_EQUIPMENT = 9989
};

/// Constant 'SUPPORT_EQUIPMENT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SUPPORT_EQUIPMENT = 9990
};

/// Constant 'MEDICAL_RESCUE_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__MEDICAL_RESCUE_UNIT = 9991
};

/// Constant 'OTHER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__OTHER = 9993
};

/// Constant 'GROUND_FIRE_SUPPRESSION_OTHER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__GROUND_FIRE_SUPPRESSION_OTHER = 9994
};

/// Constant 'ENGINE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__ENGINE = 9995
};

/// Constant 'TRUCK_OR_AERIAL'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TRUCK_OR_AERIAL = 9996
};

/// Constant 'QUINT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__QUINT = 9997
};

/// Constant 'TANKER_PUMPER_COMBINATION'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TANKER_PUMPER_COMBINATION = 9998
};

/// Constant 'BRUSH_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__BRUSH_TRUCK = 10000
};

/// Constant 'AIRCRAFT_RESCUE_FIREFIGHTING'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__AIRCRAFT_RESCUE_FIREFIGHTING = 10001
};

/// Constant 'HEAVY_GROUND_EQUIPMENT_OTHER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HEAVY_GROUND_EQUIPMENT_OTHER = 10004
};

/// Constant 'DOZER_OR_PLOW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__DOZER_OR_PLOW = 10005
};

/// Constant 'TRACTOR'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TRACTOR = 10006
};

/// Constant 'TANKER_OR_TENDER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TANKER_OR_TENDER = 10008
};

/// Constant 'AIRCRAFT_OTHER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__AIRCRAFT_OTHER = 10024
};

/// Constant 'AIRCRAFT_FIXED_WING_TANKER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__AIRCRAFT_FIXED_WING_TANKER = 10025
};

/// Constant 'HELITANKER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HELITANKER = 10026
};

/// Constant 'HELICOPTER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HELICOPTER = 10027
};

/// Constant 'MARINE_EQUIPMENT_OTHER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__MARINE_EQUIPMENT_OTHER = 10034
};

/// Constant 'FIRE_BOAT_WITH_PUMP'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__FIRE_BOAT_WITH_PUMP = 10035
};

/// Constant 'BOAT_NO_PUMP'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__BOAT_NO_PUMP = 10036
};

/// Constant 'SUPPORT_APPARATUS_OTHER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SUPPORT_APPARATUS_OTHER = 10044
};

/// Constant 'BREATHING_APPARATUS_SUPPORT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__BREATHING_APPARATUS_SUPPORT = 10045
};

/// Constant 'LIGHT_AND_AIR_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__LIGHT_AND_AIR_UNIT = 10046
};

/// Constant 'MEDICAL_RESCUE_UNIT_OTHER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__MEDICAL_RESCUE_UNIT_OTHER = 10054
};

/// Constant 'RESCUE_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__RESCUE_UNIT = 10055
};

/// Constant 'URBAN_SEARCH_RESCUE_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__URBAN_SEARCH_RESCUE_UNIT = 10056
};

/// Constant 'HIGH_ANGLE_RESCUE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HIGH_ANGLE_RESCUE = 10057
};

/// Constant 'CRASH_FIRE_RESCUE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__CRASH_FIRE_RESCUE = 10058
};

/// Constant 'BLS_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__BLS_UNIT = 10059
};

/// Constant 'ALS_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__ALS_UNIT = 10060
};

/// Constant 'MOBILE_COMMAND_POST'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__MOBILE_COMMAND_POST = 10075
};

/// Constant 'CHIEF_OFFICER_CAR'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__CHIEF_OFFICER_CAR = 10076
};

/// Constant 'HAZMAT_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HAZMAT_UNIT = 10077
};

/// Constant 'TYPE_I_HAND_CREW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_I_HAND_CREW = 10078
};

/// Constant 'TYPE_II_HAND_CREW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_II_HAND_CREW = 10079
};

/// Constant 'PRIVATELY_OWNED_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__PRIVATELY_OWNED_VEHICLE = 10083
};

/// Constant 'OTHER_APPARATUS_RESOURCE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__OTHER_APPARATUS_RESOURCE = 10084
};

/// Constant 'AMBULANCE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__AMBULANCE = 10085
};

/// Constant 'BOMB_SQUAD_VAN'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__BOMB_SQUAD_VAN = 10086
};

/// Constant 'COMBINE_HARVESTER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__COMBINE_HARVESTER = 10087
};

/// Constant 'CONSTRUCTION_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__CONSTRUCTION_VEHICLE = 10088
};

/// Constant 'FARM_TRACTOR'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__FARM_TRACTOR = 10089
};

/// Constant 'GRASS_CUTTING_MACHINES'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__GRASS_CUTTING_MACHINES = 10090
};

/// Constant 'HAZMAT_CONTAINMENT_TOW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HAZMAT_CONTAINMENT_TOW = 10091
};

/// Constant 'HEAVY_TOW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HEAVY_TOW = 10092
};

/// Constant 'LIGHT_TOW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__LIGHT_TOW = 10094
};

/// Constant 'FLATBED_TOW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__FLATBED_TOW = 10114
};

/// Constant 'HEDGE_CUTTING_MACHINES'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__HEDGE_CUTTING_MACHINES = 10093
};

/// Constant 'MOBILE_CRANE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__MOBILE_CRANE = 10095
};

/// Constant 'REFUSE_COLLECTION_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__REFUSE_COLLECTION_VEHICLE = 10096
};

/// Constant 'RESURFACING_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__RESURFACING_VEHICLE = 10097
};

/// Constant 'ROAD_SWEEPER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__ROAD_SWEEPER = 10098
};

/// Constant 'ROADSIDE_LITTER_COLLECTION_CREWS'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__ROADSIDE_LITTER_COLLECTION_CREWS = 10099
};

/// Constant 'SALVAGE_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SALVAGE_VEHICLE = 10100
};

/// Constant 'SAND_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SAND_TRUCK = 10101
};

/// Constant 'SNOWPLOW'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SNOWPLOW = 10102
};

/// Constant 'STEAM_ROLLER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__STEAM_ROLLER = 10103
};

/// Constant 'SWAT_TEAM_VAN'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SWAT_TEAM_VAN = 10104
};

/// Constant 'TRACK_LAYING_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TRACK_LAYING_VEHICLE = 10105
};

/// Constant 'UNKNOWN_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__UNKNOWN_VEHICLE = 10106
};

/// Constant 'WHITE_LINING_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__WHITE_LINING_VEHICLE = 10107
};

/// Constant 'DUMP_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__DUMP_TRUCK = 10108
};

/// Constant 'SUPERVISOR_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SUPERVISOR_VEHICLE = 10109
};

/// Constant 'SNOW_BLOWER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__SNOW_BLOWER = 10110
};

/// Constant 'ROTARY_SNOW_BLOWER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__ROTARY_SNOW_BLOWER = 10111
};

/// Constant 'ROAD_GRADER'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__ROAD_GRADER = 10112
};

/// Constant 'STEAM_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__STEAM_TRUCK = 10113
};

// Struct defined in msg/ITISIncidentResponseEquipment in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ITISIncidentResponseEquipment
{
  uint16_t incident_response_equipment;
} j2735_v2x_msgs__msg__ITISIncidentResponseEquipment;

// Struct for a sequence of j2735_v2x_msgs__msg__ITISIncidentResponseEquipment.
typedef struct j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__Sequence
{
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__STRUCT_H_
