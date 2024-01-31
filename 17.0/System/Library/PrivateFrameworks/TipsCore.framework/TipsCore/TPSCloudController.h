@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_clearDisplayedContentIDs;
- (void)checkForUpdates;
- (void).cxx_destruct;
- (void)updateKVStoreItems:(id)a0;
- (void)registerForNotifications:(id)a0;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (id)_listDisplayContentIDs;
- (void)hintDisplayedForContentID:(id)a0;

@end
