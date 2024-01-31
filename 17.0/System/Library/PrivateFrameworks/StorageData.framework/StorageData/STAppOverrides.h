@class NSString, NSArray;

@interface STAppOverrides : NSObject

@property (readonly) BOOL forceExcludeUsageBundle;
@property (readonly) int category;
@property (readonly) BOOL hideLastUsed;
@property (readonly) BOOL forceVisible;
@property (readonly) BOOL forceHidden;
@property (readonly) BOOL isMediaApp;
@property (readonly) NSString *usageBundleOverride;
@property (readonly) NSString *defaultName;
@property (readonly) BOOL excludeUsageBundle;
@property (readonly) BOOL isICloud;
@property (readonly) NSArray *includeMediaUsage;
@property (readonly) NSArray *includeFsPaths;
@property (readonly) NSArray *includeCacheDeleteKeys;
@property (readonly) NSArray *includeContainers;
@property (readonly) BOOL includeSoftwareUpdates;

+ (id)overrides;
+ (id)overridesFor:(id)a0;
+ (id)overridesForApplication:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
