@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

@interface SBSStatusBarStyleOverridesCoordinator : SBSBackgroundActivityCoordinator

@property (weak, nonatomic) id<SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long styleOverrides;

- (void)setRegisteredStyleOverrides:(unsigned long long)a0 reply:(id /* block */)a1;

@end
