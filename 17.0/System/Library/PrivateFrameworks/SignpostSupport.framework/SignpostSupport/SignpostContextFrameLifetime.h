@class SignpostContextInfo, SignpostFrameLifetimeInterval;
@protocol SignpostSupportTimeInterval;

@interface SignpostContextFrameLifetime : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>

@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) SignpostFrameLifetimeInterval *parentFrameLifetime;
@property (readonly, nonatomic) SignpostContextInfo *contextInfo;
@property (readonly, nonatomic) id<SignpostSupportTimeInterval> contextGlitchInterval;

- (void).cxx_destruct;
- (id)initWithFrameLifetime:(id)a0 contextInfo:(id)a1;

@end
