@interface TZPreferencesController : NSObject

@property (readonly, nonatomic) BOOL updatesEnabled;
@property (readonly, nonatomic) long long loggingLevel;

+ (id)sharedPreferencesController;

- (id)init;
- (void)preferencesChanged:(id)a0;

@end
