@class IKJSInspectorController, NSString;

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler>

@property (readonly, weak, nonatomic) IKJSInspectorController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_itemAdded:(id)a0;
- (void)_itemRemoved:(id)a0;
- (void)_itemUpdated:(id)a0;
- (void)_itemsCleared:(id)a0;
- (id)_storageForStorageId:(id)a0;
- (id)_storageIdForStorage:(id)a0;
- (void)disableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)enableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getDOMStorageItemsWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 storageId:(id)a2;
- (id)initWithInspectorController:(id)a0;
- (void)removeDOMStorageItemWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 storageId:(id)a2 key:(id)a3;
- (void)setDOMStorageItemWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 storageId:(id)a2 key:(id)a3 value:(id)a4;
- (void)startListeningForStorageNotifications;
- (void)stopListeningForStorageNotifications;

@end
