@interface PFUbiquityLogging : NSObject

@property (nonatomic) int desiredLogLevel;

+ (void)initialize;
+ (BOOL)canLogMessageAtLevel:(int)a0;
+ (void)setLoggingLevel:(int)a0;

- (id)init;
- (void)dealloc;
- (void)userDefaultsChanged:(id)a0;

@end
