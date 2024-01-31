@class NSURL, LSAppLink, LSApplicationProxy;

@interface WBSAppLink : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    BOOL _didResolveAppLink;
    LSAppLink *_cachedAppLink;
}

@property (class, nonatomic) BOOL shouldOfferToOpenAppleNewsArticlesInNewsApp;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isAppleNewsLink) BOOL isAppleNewsLink;
@property (readonly, nonatomic) LSApplicationProxy *synchronousTargetApplicationProxy;

+ (void)clearSavedSettings;

- (id)initWithURL:(id)a0;
- (void)disable;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getAppLinkLabel:(id *)a0 name:(id *)a1 bundleIdentifier:(id *)a2 icon:(id *)a3;
- (long long)synchronouslyDecideOpenStrategy;
- (void)decideOpenStrategyWithCompletionHandler:(id /* block */)a0;
- (void)getAppLinkAttributesWithCompletionHandler:(id /* block */)a0;
- (void)openExternallyWithWebBrowserState:(id)a0 referrerURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_appLink:(id)a0 getAppLinkLabel:(id *)a1 name:(id *)a2 bundleIdentifier:(id *)a3 icon:(id *)a4;
- (void)_getAppLinkWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isApplicationProxyAppleNews:(id)a0;
- (long long)_openStrategyForAppLink:(id)a0;
- (id)_synchronouslyFetchAppLinkWithError:(id *)a0;
- (void)getAppLinkTargetApplicationBundleIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)openExternally;

@end
