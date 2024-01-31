@interface WLKUpNextWidgetCacheManager : NSObject

+ (void)requestInvalidation;
+ (void)requestReload;
+ (BOOL)consumePendingInvalidation;

@end
