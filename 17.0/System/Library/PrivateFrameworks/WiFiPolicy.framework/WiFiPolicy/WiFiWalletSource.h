@class PKPassLibrary, NSMutableDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiWalletSource : NSObject <WiFiAvailabilitySource>

@property (retain, nonatomic) PKPassLibrary *passLibrary;
@property (retain, nonatomic) NSMutableDictionary *networks;
@property (retain, nonatomic) NSMutableSet *relevantPassIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (copy, nonatomic) id /* block */ relevancyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_createWiFiWalletPassFromPass:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_passLibraryDidBecomeRelevantNotification:(id)a0;
- (void)_handleRelevantPassUpdate:(id)a0;
- (void)_issueRelevancyCallbackWithRelevantNetworks:(id)a0 notRelevantNetworks:(id)a1;
- (id)candidateNetworks;
- (id)_networksWithIdentifier:(id)a0;
- (id)initWithChangeHandler:(id /* block */)a0;
- (id)expiredWalletIDs;
- (void)_passLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)relevantNetworks;
- (void)_handlePassLibraryChange:(id)a0;
- (void)_addPass:(id)a0;
- (void)_passDidBecomeRelevant:(id)a0;
- (void)_removeRelevantPasses;
- (void)_initializeWiFiPasses;

@end
