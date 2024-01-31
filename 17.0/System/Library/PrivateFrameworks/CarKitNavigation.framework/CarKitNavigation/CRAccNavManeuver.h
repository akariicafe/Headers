@class ACCNavigationManeuverUpdateInfo;

@interface CRAccNavManeuver : CRAccNavInfo

@property (readonly, nonatomic) ACCNavigationManeuverUpdateInfo *maneuver;
@property (readonly, nonatomic) unsigned short index;
@property (readonly, nonatomic) unsigned short linkedLaneGuidanceIndex;

@end
