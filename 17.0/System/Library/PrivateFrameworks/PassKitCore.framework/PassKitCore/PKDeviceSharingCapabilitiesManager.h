@class NSString, PKPaymentService, NSHashTable, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKDeviceSharingCapabilitiesManager : NSObject <PKPaymentServiceDelegate> {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentService *_paymentService;
    NSMutableArray *_familyMembers;
    NSMutableDictionary *_fetchStatusByAppleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)didReceiveDeviceSharingCapabilities:(id)a0 forHandle:(id)a1;
- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)_sendDeviceSharingCapabilitiesUpdated:(id)a0 maximumPossibleDevices:(long long)a1 forAppleID:(id)a2;
- (void)_sendDeviceSharingCapabilitiesUpdated:(id)a0 newSharingCapabilties:(id)a1 forAppleID:(id)a2;
- (id)currentFetchStatusForAppleID:(id)a0;
- (void)fetchDeviceCapabilitesForAppleIDs:(id)a0 associatedFamilyMembers:(id)a1;

@end
