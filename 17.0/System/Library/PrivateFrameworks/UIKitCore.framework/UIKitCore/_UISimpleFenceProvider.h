@class NSString;

@interface _UISimpleFenceProvider : NSObject <UIFenceProviding> {
    BOOL _trackingAny;
    BOOL _synchronizing;
}

@property (class, readonly, nonatomic) _UISimpleFenceProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)a0;
- (id)requestSystemAnimationFence;
- (BOOL)trackSystemAnimationFence:(id)a0;
- (BOOL)isTrackingAnySystemAnimationFence;

@end
