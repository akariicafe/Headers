@class SUImageCache, NSString, SUScriptExecutionContext, NSLock, ISURLOperationPool, SUClientInterface;
@protocol SUClientDelegate;

@interface SUClient : NSObject {
    struct __CFArray { } *_assetTypes;
    SUClientInterface *_clientInterface;
    NSLock *_lock;
}

@property (readonly) SUClientInterface *clientInterface;
@property (nonatomic) id<SUClientDelegate> delegate;
@property (nonatomic) BOOL dontSaveNavigationPath;
@property (retain, nonatomic) NSString *searchHintsURLBagKey;
@property (retain, nonatomic) NSString *searchURLBagKey;
@property (retain, nonatomic) SUImageCache *imageCache;
@property (retain, nonatomic) ISURLOperationPool *imagePool;
@property (readonly, nonatomic) SUScriptExecutionContext *scriptExecutionContext;

+ (id)sharedClient;
+ (id)viewControllerFactory;
+ (void)setSharedClient:(id)a0;
+ (id)imagePool;

- (id)init;
- (void)dealloc;
- (void)setClientIdentifier:(id)a0;
- (id)clientIdentifier;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (id)viewControllerFactory;
- (void)_purgeCaches;
- (void)_memoryWarningNotification:(id)a0;
- (void)setViewControllerFactory:(id)a0;
- (void)_bagDidLoadNotification:(id)a0;
- (id)_newAccountViewControllerForButtonAction:(id)a0;
- (id)_newComposeReviewViewControllerForButtonAction:(id)a0;
- (BOOL)_presentModalViewController:(id)a0 animated:(BOOL)a1;
- (void)_reloadScriptExecutionContext;
- (struct __CFArray { } *)assetTypes;
- (BOOL)composeReviewWithViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)a0;
- (BOOL)enterAccountFlowWithViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithClientInterface:(id)a0;
- (BOOL)openExternalURL:(id)a0;
- (BOOL)openInternalURL:(id)a0;
- (BOOL)openURL:(id)a0 inClientApplication:(id)a1;
- (id)queueSessionManager;
- (BOOL)sendActionForDialog:(id)a0 button:(id)a1;
- (void)setAssetTypes:(struct __CFArray { } *)a0;
- (void)setQueueSessionManager:(id)a0;

@end
