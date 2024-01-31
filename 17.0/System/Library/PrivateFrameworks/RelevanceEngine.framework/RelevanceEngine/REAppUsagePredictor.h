@class RETimeline, REUpNextTimer;

@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties> {
    REUpNextTimer *_timelineProgressionTimer;
    RETimeline *_timeline;
}

@property (readonly, nonatomic) RETimeline *timeline;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)update;
- (void).cxx_destruct;
- (id)_nextTimelineTransitionDateAfter:(id)a0;
- (void)_scheduleTimelineProgressionTimerAfter:(id)a0;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;

@end
