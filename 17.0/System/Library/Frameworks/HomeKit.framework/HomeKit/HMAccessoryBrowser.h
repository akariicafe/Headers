@class NSUUID, _HMContext, HMMutableArray, NSArray, NSString, NSObject;
@protocol HMAccessoryBrowserDelegate, OS_dispatch_queue;

@interface HMAccessoryBrowser : NSObject <HMFLogging, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *accessories;
@property (nonatomic) unsigned long long generationCounter;
@property (nonatomic, getter=isBrowsing) BOOL browsing;
@property (weak, nonatomic) id<HMAccessoryBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *discoveredAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)unconfigureQueue;

- (void)_start;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startSearchingForNewAccessories;
- (void)_fetchNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_handleNewAccessoriesFound:(id)a0;
- (void)_handleNewAccessoriesRemoved:(id)a0;
- (void)_registerNotificationHandlers;
- (void)_startSearchingForNewAccessories;
- (void)_stopSearchingForNewAccessoriesWithError:(id)a0;
- (void)_updateNewAccessories:(id)a0;
- (void)handleStartWithError:(id)a0 response:(id)a1;
- (void)stopSearchingForNewAccessories;
- (void)stopSearchingForNewAccessoriesWithError:(id)a0;

@end
