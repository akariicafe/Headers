@class NSString;

@interface VCIntentDefinitionManager : NSObject <INVCIntentDefinitionManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allBundleIdentifiers;
+ (id)intentDefinitionURLsForBundleID:(id)a0;
+ (id)intentDefinitionBundleURLForBundleID:(id)a0;
+ (id)intentDefinitionURLsForBundleID:(id)a0 inDirectory:(id)a1;
+ (id)appInfoForBundleID:(id)a0;


@end
