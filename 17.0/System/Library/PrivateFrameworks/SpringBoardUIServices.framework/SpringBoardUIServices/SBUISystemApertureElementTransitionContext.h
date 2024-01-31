@protocol UIViewControllerTransitionCoordinator;

@interface SBUISystemApertureElementTransitionContext : NSObject

@property (retain, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;
@property (nonatomic) long long fromLayoutMode;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;

- (void).cxx_destruct;

@end
