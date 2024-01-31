@interface _WKAttributedStringWebViewCache : NSObject

+ (id)cache;
+ (id)configuration;
+ (void)clearConfiguration;
+ (void)resetPurgeDelay;
+ (void)cacheWebView:(id)a0;
+ (void)clearConfigurationAndRaiseExceptionIfNecessary:(id)a0;
+ (void)maybeConsumeBundlePaths:(id)a0;
+ (void)purgeAllWebViews;
+ (void)purgeSingleWebView;
+ (struct RetainPtr<WKWebView> { void *x0; })retrieveOrCreateWebView;
+ (void)validateEntry:(id)a0;

@end
