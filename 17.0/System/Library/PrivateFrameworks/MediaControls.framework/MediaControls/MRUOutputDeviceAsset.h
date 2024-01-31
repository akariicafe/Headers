@class NSString, UIImage, CCUICAPackageDescription;

@interface MRUOutputDeviceAsset : MRUAsset

@property (class, readonly, nonatomic) MRUOutputDeviceAsset *speakerAsset;
@property (class, readonly, nonatomic) MRUOutputDeviceAsset *inCallAsset;
@property (class, readonly, nonatomic) MRUOutputDeviceAsset *sharingAsset;

@property (readonly, nonatomic) NSString *localizedDisplayTitle;
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long kind;

- (id)initWithPackageAsset:(id)a0 symbolName:(id)a1 image:(id)a2 type:(long long)a3 deviceCount:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)localizedDisplayTitleForAssetType:(long long)a0 deviceCount:(unsigned long long)a1;
- (long long)outputDeviceAssetTypeForOutputDeviceRoute:(id)a0;
- (id)initWithOutputDeviceRoute:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
