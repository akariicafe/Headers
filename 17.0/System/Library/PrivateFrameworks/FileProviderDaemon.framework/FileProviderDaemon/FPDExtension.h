@class NSString, LSApplicationExtensionRecord, NSObject, NSExtension;
@protocol OS_dispatch_queue;

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate> {
    LSApplicationExtensionRecord *_extensionRecord;
}

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) LSApplicationExtensionRecord *extensionRecord;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedSessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocForIdentifier:(id)a0;
+ (id)instanceWithExtension:(id)a0 queue:(id)a1 server:(id)a2;
+ (id)instanceWithExtension:(id)a0 queue:(id)a1 volumeManager:(id)a2;
+ (id)instanceWithExtensionRecord:(id)a0 queue:(id)a1 server:(id)a2;
+ (id)instanceWithExtensionRecord:(id)a0 queue:(id)a1 volumeManager:(id)a2;

- (void)reindexAllSearchableItemsForRequest:(id)a0 acknowledgementHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;
- (BOOL)isAppExtensionReachable;
- (void)removeTrashedItemsOlderThanDate:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isEqual:(id)a0;
- (void)didReceiveMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)customPushTopics;
- (id)initWithExtension:(id)a0 extensionRecord:(id)a1 queue:(id)a2 server:(id)a3 volumeManager:(id)a4;
- (id)asAppExtensionBackedProvider;

@end
