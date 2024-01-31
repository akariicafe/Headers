@class NSSet;
@protocol SBSBackgroundActivityCoordinatorDelegate;

@interface SBSBackgroundActivityCoordinator : NSObject

@property (weak, nonatomic) id<SBSBackgroundActivityCoordinatorDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *backgroundActivityIdentifiers;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)styleOverrides;
- (void)setRegisteredStyleOverrides:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)_handleStatusBarTapWithContext:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_registrationInvalidated:(id)a0;
- (void)setRegisteredBackgroundActivityIdentifiers:(id)a0 reply:(id /* block */)a1;

@end
