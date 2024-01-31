@class NSString, NSArray, PKOSVersionRequirementRange, PKRemoteImageSet, NSDictionary;

@interface PKLayoutAssetImage : NSObject <PKDynamicTemplateLayoutAsset>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *subimages;
@property (retain, nonatomic) PKRemoteImageSet *remoteImage;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (retain, nonatomic) NSDictionary *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetKey;
+ (id)nameToAssetsMapFromDictionaries:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 remoteImage:(id)a1;
- (id)initWithName:(id)a0 subimages:(id)a1;

@end
