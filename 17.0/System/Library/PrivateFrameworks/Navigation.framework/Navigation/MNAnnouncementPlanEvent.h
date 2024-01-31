@class NSArray, NSMutableArray, GEOComposedGuidanceEvent;

@interface MNAnnouncementPlanEvent : NSObject

@property (retain, nonatomic) GEOComposedGuidanceEvent *event;
@property (nonatomic) double distance;
@property (nonatomic) double speed;
@property (retain, nonatomic) NSArray *durations;
@property (retain, nonatomic) NSMutableArray *announcementDurations;
@property (nonatomic) BOOL includeInPlan;
@property (nonatomic) unsigned long long variantIndex;
@property (nonatomic) double triggerDistance;
@property (readonly, nonatomic) double completionDistance;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 distance:(double)a1 speed:(double)a2 durations:(id)a3;

@end
