@interface DBSAnalytics : NSObject

+ (BOOL)isChild;
+ (BOOL)checkAndUpdateFirst:(id)a0;
+ (void)logAutomaticDarkModeEvent:(BOOL)a0;
+ (void)logBoldTextEvent:(BOOL)a0;
+ (void)logDarkModeEvent:(BOOL)a0;
+ (void)logEvent:(id)a0 feature:(id)a1 value:(id)a2;
+ (void)logTextSizeEvent:(id)a0;

@end
