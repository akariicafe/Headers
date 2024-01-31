@class NSObject;
@protocol OS_dispatch_group;

@interface PUTileAnimationOptions : NSObject

@property (nonatomic, getter=isSynchronizedWithTransition) BOOL synchronizedWithTransition;
@property (nonatomic) long long kind;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) double springDampingRatio;
@property (nonatomic) double springMass;
@property (nonatomic) double springStiffness;
@property (nonatomic) long long springNumberOfOscillations;
@property (nonatomic) struct PUDisplayVelocity { double x; double y; double scale; double rotation; } initialVelocity;
@property (copy, nonatomic) id /* block */ customViewAnimatorBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup;
@property (nonatomic) BOOL shouldFadeOutSnapshotAfterCompletionGroup;
@property (nonatomic) unsigned int highFrameRateReason;

- (void).cxx_destruct;

@end
