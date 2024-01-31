@interface CPLNetworkIndicator : NSObject

+ (void)_doProtected:(id /* block */)a0;
+ (void)_reallyHideNetworkIndicatorForBundleWithIdentifierLocked:(id)a0;
+ (void)_reallyShowNetworkIndicatorForBundleWithIdentifierLocked:(id)a0;
+ (void)hideNetworkIndicatorForBundleWithIdentifier:(id)a0;
+ (void)showNetworkIndicatorForBundleWithIdentifier:(id)a0;

@end
