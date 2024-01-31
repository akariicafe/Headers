@interface STEyeReliefViewModel : NSObject

@property (nonatomic) BOOL isEyeReliefEnabled;

- (BOOL)inDemoMode;
- (void)acknowledgeIntroScreens;
- (BOOL)hasAcknowledgedIntroScreens;

@end
