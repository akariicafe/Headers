@interface SBGuidedAccessListener : NSObject

@property (nonatomic) BOOL isGuidedAccessActive;

+ (id)sharedGuidedAccessListener;

- (id)init;
- (void)guidedAccessWasDeactivated;
- (void)guidedAccessWasActivated;

@end
