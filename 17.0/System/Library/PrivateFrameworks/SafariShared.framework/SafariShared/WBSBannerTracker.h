@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSBannerTracker : NSObject {
    NSMutableDictionary *_blockedBanners;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) long long basis;

+ (id)sharedTracker;

- (void)load;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)_filePath;
- (void)blockBannerForIdentifier:(id)a0;
- (void)isBannerBlockedForIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldBlockForIdentifier:(id)a0 withDismissCount:(unsigned long long)a1;
- (void)unblockBannerForIdentifier:(id)a0;
- (void)_saveOnInteralQueue;

@end
