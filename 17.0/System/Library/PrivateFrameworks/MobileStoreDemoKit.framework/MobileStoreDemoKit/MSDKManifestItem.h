@class MSDKManifestComponent;

@interface MSDKManifestItem : NSObject

@property (readonly, weak, nonatomic) MSDKManifestComponent *component;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andDictionary:(id)a1 forComponent:(id)a2;

@end
