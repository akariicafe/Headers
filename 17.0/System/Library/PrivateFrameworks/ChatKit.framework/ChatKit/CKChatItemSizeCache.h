@class NSMutableDictionary, NSString, NSData, IMDoubleLinkedList, NSObject, IMScheduledUpdater;
@protocol OS_dispatch_queue;

@interface CKChatItemSizeCache : NSObject <IMSystemMonitorListener>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *chatItemGUIDToCacheKeyMap;
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDiskQueue;
@property (retain, nonatomic) IMScheduledUpdater *evictionUpdater;
@property (retain, nonatomic) NSString *preferredLocalization;
@property (nonatomic) BOOL test_throwExceptionDuringInflate;
@property (retain, nonatomic) NSData *test_cacheData;

+ (id)sharedInstance;
+ (id)test_cachePath;

- (id)init;
- (void)dealloc;
- (void)systemApplicationDidSuspend;
- (void)applicationWillResignActive;
- (void).cxx_destruct;
- (void)_commonInit;
- (BOOL)_boldTextEnabled;
- (id)_systemVersion;
- (void)_evictIfNeeded;
- (id)_fontSizeCategory;
- (id)_generateChatItemGuidToCacheKeyMapWithCache:(id)a0;
- (void)_inflateCache;
- (void)_invalidateCachedSizeForChatItemGUID:(id)a0;
- (void)_invalidateSizeCacheMetricsForKey:(id)a0;
- (void)_persistCache;
- (void)_updateKeyMap:(id)a0 forKey:(id)a1 sizeCacheKey:(id)a2;
- (id)cacheKeyForChatItem:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)cachedSizeForChatItem:(id)a0 size:(out struct CGSize { double x0; double x1; } *)a1 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 fittingSize:(struct CGSize { double x0; double x1; })a3;
- (id)initForTestAndThrowException:(BOOL)a0 cacheFileData:(id)a1;
- (void)invalidateCachedSizeForChatItem:(id)a0;
- (void)invalidateCachedSizeForGUIDPrefix:(id)a0;
- (void)setCachedSizeForChatItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 fittingSize:(struct CGSize { double x0; double x1; })a3;

@end
