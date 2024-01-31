@interface UIDictationLandingViewSettings : NSObject

@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double shrinkDuration;
@property (nonatomic) double colorTransitionInDuration;
@property (nonatomic) double colorTransitionOutDuration;
@property (nonatomic) double circleRPM;
@property (nonatomic) BOOL useBlackWave;

+ (id)sharedInstance;

- (id)init;

@end
