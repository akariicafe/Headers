@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AXImageMonitor, OS_dispatch_source;

@interface AXCodeLoader : NSObject <AXImageMonitorObserver> {
    id<AXImageMonitor> _imageMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_loadAccessibilityCodeItemsSource;
    NSObject<OS_dispatch_source> *_dyldImageActivityCoalesceTimer;
    long long _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSMutableSet *_trackedCodeItems;
    NSMutableSet *_accessibilityCodeItems;
    NSMutableDictionary *_codeItemsByNameType;
    id /* block */ _beginTrackingCompletion;
    NSObject<OS_dispatch_queue> *_beginTrackingCompletionQueue;
    BOOL _initialLoadHasOccurred;
    BOOL _initialLoadHasFinished;
    NSString *_currentPlatformKey;
}

@property (nonatomic) long long trackingMode;
@property (readonly, nonatomic) BOOL isTrackingLoadedCodeItems;
@property (readonly, nonatomic) BOOL isInitialLoadFinished;
@property (nonatomic) BOOL shouldAutoloadAccessibilityCodeItems;
@property (copy, nonatomic) id /* block */ shouldLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) id /* block */ didLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) id /* block */ loadEventWillOccurBlock;
@property (copy, nonatomic) id /* block */ loadEventDidOccurBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLoader;

- (id)init;
- (void).cxx_destruct;
- (id)_accessibilityBundleMapURLs;
- (id)_accessibilityCodeItemMatchingName:(id)a0 type:(long long)a1 path:(id)a2;
- (void)_addTrackedCodeItem:(id)a0;
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)a0;
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
- (void)_cancelDyldImageActivityTimer;
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)a0;
- (void)_initializeCodeItemMappings;
- (void)_loadAccessibilityCodeItems;
- (id)_platformKeyForPlatform:(unsigned int)a0;
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)a0;
- (id)_stateDescForItem:(id)a0;
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
- (id /* block */)_validDidLoadAccessibilityCodeItemBlock;
- (id /* block */)_validLoadEventDidOccurBlock;
- (id /* block */)_validLoadEventWillOccurBlock;
- (id /* block */)_validShouldLoadAccessibilityCodeItemBlock;
- (id)accessibilityCodeItemDefinitions;
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)a0 completion:(id /* block */)a1 targetQueue:(id)a2;
- (id)codeItemForBundle:(id)a0;
- (void)endTrackingLoadedCodeItemsWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
- (void)imageMonitor:(id)a0 didAddImage:(id)a1;
- (id)initWithImageMonitor:(id)a0;
- (void)iterateInitialImageListForImageMonitor:(id)a0;
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (void)logLoaderState;
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
- (void)queryAccessibilityBundleIsLoadedWithName:(id)a0 completion:(id /* block */)a1;
- (id)recomputedCodeItemsForAllFrameworks;
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;
- (id)rogueAccessibilityCodeItems;
- (void)setAccessibilityCodeItemsNeedLoaded;
- (id)trackedCodeItems;

@end
