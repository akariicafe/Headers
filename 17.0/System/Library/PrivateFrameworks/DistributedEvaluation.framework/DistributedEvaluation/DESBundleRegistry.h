@class NSString, NSDictionary, NSSet;

@interface DESBundleRegistry : NSObject <DESBundleRegistryManaging> {
    NSDictionary *_bundleMap;
    NSSet *_lowMemoryExtensions;
    NSSet *_highMemoryExtensions;
    NSSet *_restrictedExtensions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)_extensionsWithEndpointName:(id)a0;

- (BOOL)containsBundleId:(id)a0;
- (id)init;
- (id)_init;
- (id)infoDictionaryForBundleID:(id)a0;
- (id)allBundleIds;
- (id)allUnrestrictedBundleIds;
- (id)allUnrestrictedExtensionIds;
- (long long)pluginTypeForBundleId:(id)a0;
- (void).cxx_destruct;

@end
