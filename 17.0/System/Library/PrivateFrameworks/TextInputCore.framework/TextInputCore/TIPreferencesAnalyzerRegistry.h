@class NSMutableArray;

@interface TIPreferencesAnalyzerRegistry : NSObject

@property (readonly, nonatomic) NSMutableArray *registry;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)_registerPreference:(id)a0 domain:(id)a1 defaultValue:(id)a2 reportingMode:(int)a3;
- (void)enumerateRegisteredPreferencesUsingBlock:(id /* block */)a0;

@end
