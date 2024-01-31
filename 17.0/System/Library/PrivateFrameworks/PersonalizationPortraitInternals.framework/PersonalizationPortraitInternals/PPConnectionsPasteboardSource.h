@class NSString, NSOperationQueue, NSLocale, NSObject, _PASLock;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {
    unsigned long long _pasteboardNotificationState;
    _PASLock *_lock;
    id _pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setPasteboardTextForTesting:(id)a0;
- (void)setTestLocale:(id)a0;
- (void)unsetPasteboardTextForTestingAndClearCache;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;
- (id)supportedSemanticTags;
- (id)identifier;
- (id)_mostRecentPasteboardItem;
- (void)refreshMostRecentPasteboardItemFromNotification:(BOOL)a0 explanationSet:(id)a1;
- (id)fetchedPasteboardItem;
- (void).cxx_destruct;
- (void)_setMostRecentPasteboardItem:(id)a0;
- (id)addressPasteboardTextItemFromNotification:(BOOL)a0;
- (id)validUTTypes;

@end
