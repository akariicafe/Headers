@class NSString, NSArray;

@interface CSContinuousVoiceTriggerConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float twoShotThreshold;
@property (readonly, nonatomic) float twoShotDecisionWaitTime;
@property (readonly, nonatomic) NSArray *voiceTriggerPhIds;
@property (readonly, nonatomic) NSArray *silencePhIds;

- (id)initWithConfigPathNDAPI:(id)a0 threshold:(float)a1 twoShotThreshold:(float)a2 twoShotDecisionWaitTime:(float)a3 voiceTriggerPhIds:(id)a4 silencePhIds:(id)a5;
- (void).cxx_destruct;

@end
