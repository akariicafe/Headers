@class NSPredicate, NSSet, NSObject;
@protocol OS_dispatch_queue, EAWiFiUnconfiguredAccessoryBrowserDelegate;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject {
    BOOL __debugLog;
}

@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain) NSPredicate *accessorySearchPredicate;
@property (weak, nonatomic) id<EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate;
@property (readonly, copy) NSSet *unconfiguredAccessories;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)_handleBrowserDidUpdateState:(id)a0;
- (void)_handleBrowserFinishedConfiguring:(id)a0;
- (void)_handleNewAccessoriesNotification:(id)a0;
- (void)_handlePurgeAccessoriesSetNotification:(id)a0;
- (void)_handleRemovedAccessoriesNotification:(id)a0;
- (void)configureAccessory:(id)a0 withConfigurationUIOnViewController:(id)a1;
- (void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)a0;
- (void)stopSearchingForUnconfiguredAccessories;

@end
