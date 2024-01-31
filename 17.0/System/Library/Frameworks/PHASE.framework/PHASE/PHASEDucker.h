@class NSString, NSSet, PHASEEngine;

@interface PHASEDucker : NSObject {
    PHASEEngine *_engine;
    NSSet *_sourceGroups;
    NSSet *_targetGroups;
    BOOL _active;
}

@property (readonly, nonatomic) double gainHighFrequency;
@property (readonly, nonatomic) double gainLowFrequency;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, copy, nonatomic) NSSet *sourceGroups;
@property (readonly, copy, nonatomic) NSSet *targetGroups;
@property (readonly, getter=isActive) BOOL active;
@property (readonly, nonatomic) double gain;
@property (readonly, nonatomic) double attackTime;
@property (readonly, nonatomic) double releaseTime;
@property (readonly, nonatomic) long long attackCurve;
@property (readonly, nonatomic) long long releaseCurve;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;
- (id)initWithEngine:(id)a0 sourceGroups:(id)a1 targetGroups:(id)a2 gain:(double)a3 attackTime:(double)a4 releaseTime:(double)a5 attackCurve:(long long)a6 releaseCurve:(long long)a7;
- (id)initWithEngine:(id)a0 sourceGroups:(id)a1 targetGroups:(id)a2 gain:(double)a3 gainHighFrequency:(double)a4 gainLowFrequency:(double)a5 attackTime:(double)a6 releaseTime:(double)a7 attackCurve:(long long)a8 releaseCurve:(long long)a9;
- (id)initWithEngine:(id)a0 sourceGroups:(id)a1 targetGroups:(id)a2 gain:(double)a3 lowFrequencyGain:(double)a4 highFrequencyGain:(double)a5 attackTime:(double)a6 releaseTime:(double)a7 attackCurve:(long long)a8 releaseCurve:(long long)a9;

@end
