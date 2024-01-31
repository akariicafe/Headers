@class NSMutableDictionary, SignpostSupportAnimationGraceTime;

@interface SignpostSupportAnimationGraceTimeController : NSObject

@property (readonly, nonatomic) NSMutableDictionary *subsystemGraceTimesDictionary;
@property (readonly, nonatomic) SignpostSupportAnimationGraceTime *userInteractiveGraceTime;
@property (readonly, nonatomic) SignpostSupportAnimationGraceTime *userInitiatedGraceTime;
@property (readonly, nonatomic) SignpostSupportAnimationGraceTime *defaultGraceTime;
@property (nonatomic) unsigned long long userInteractiveGraceTimeMs;
@property (nonatomic) unsigned long long userInitiatedGraceTimeMs;
@property (nonatomic) unsigned long long defaultGraceTimeMs;

- (id)gracetimeForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (id)init;
- (unsigned long long)gracetimeMsForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (void)setFirstFrameGraceTimeMs:(unsigned long long)a0 forSubsystem:(id)a1 category:(id)a2 name:(id)a3;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)setAnimationType:(unsigned long long)a0 forSubsystem:(id)a1 category:(id)a2 name:(id)a3;
- (void)_setFirstFrameGraceTime:(id)a0 forSubsystem:(id)a1 category:(id)a2 name:(id)a3;

@end
