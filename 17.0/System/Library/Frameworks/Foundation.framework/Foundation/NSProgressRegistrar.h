@class NSString, NSMutableDictionary, NSMutableSet, NSFileAccessNode, NSObject;
@protocol OS_dispatch_queue;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_publishersByID;
    NSMutableDictionary *_publisherTransactionsByID;
    NSMutableDictionary *_subscribersByID;
    NSMutableDictionary *_subscriberTransactionsByID;
    NSFileAccessNode *_rootFileAccessNode;
    NSMutableSet *_pendingFileSubscriberIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)observePublisherUserInfoForID:(id)a0 value:(id)a1 forKey:(id)a2;
- (oneway void)addSubscriber:(id)a0 forID:(id)a1 appBundleID:(id)a2 fileURL:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (oneway void)observePublisherForID:(id)a0 values:(id)a1 forKeys:(id)a2;
- (oneway void)removePublisherForID:(id)a0;
- (id)initWithQueue:(id)a0 rootFileAccessNode:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_getRemoteProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 canReadItemAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)removeSubscriberForID:(id)a0;
- (oneway void)addPublisher:(id)a0 forID:(id)a1 acknowledgementAppBundleIDs:(id)a2 category:(id)a3 fileURL:(id)a4 initialValues:(id)a5 completionHandler:(id /* block */)a6;
- (oneway void)addSubscriber:(id)a0 forID:(id)a1 appBundleID:(id)a2 category:(id)a3 completionHandler:(id /* block */)a4;

@end
