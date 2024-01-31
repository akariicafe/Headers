@class NSArray, ACCNavigationRouteGuidanceUpdateInfo;

@interface CRAccNavRouteGuidance : CRAccNavInfo

@property (readonly, nonatomic) ACCNavigationRouteGuidanceUpdateInfo *routeGuidance;
@property (readonly, nonatomic) unsigned char guidanceState;
@property (readonly, nonatomic) NSArray *currentManeuverIndexes;
@property (readonly, nonatomic) BOOL hasCurrentLaneGuidanceIndex;
@property (readonly, nonatomic) unsigned short currentLaneGuidanceIndex;

+ (id)loadingForComponent:(id)a0;
+ (id)resetForComponent:(id)a0;

@end
