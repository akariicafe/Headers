@class NSDictionary;

@interface PRPosterDescriptorGalleryAssetLookupInfo : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_lookupInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_assetManagerCache;
+ (id)imageCache;
+ (id)defaultLookupInfo;
+ (id)lookUpInfoForAssetCatalogIdentifier:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetCatalogIdentifier:(id)a0;
- (id)imageFromBundle:(id)a0 displayContext:(id)a1 error:(out id *)a2;

@end
