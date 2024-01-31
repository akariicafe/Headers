@class NSString;

@interface STUsageBundleOverrides : NSObject

@property (readonly) BOOL ignore;
@property (readonly) NSString *replaceWithZeroSizeApp;

+ (id)overrides;
+ (id)overridesFor:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
