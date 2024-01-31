@interface CPLSyncIndicator : NSObject

+ (void)setForeground:(BOOL)a0;
+ (void)_reallyShowSyncIndicator;
+ (void)hideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)_reallyHideSyncIndicator;
+ (void)_doProtected:(id /* block */)a0;

@end
