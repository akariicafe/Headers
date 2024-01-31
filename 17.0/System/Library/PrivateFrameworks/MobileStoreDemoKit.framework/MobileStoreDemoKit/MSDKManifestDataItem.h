@class NSDictionary;

@interface MSDKManifestDataItem : MSDKManifestItem

@property (readonly, nonatomic) NSDictionary *data;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andDictionary:(id)a1 forComponent:(id)a2;

@end
