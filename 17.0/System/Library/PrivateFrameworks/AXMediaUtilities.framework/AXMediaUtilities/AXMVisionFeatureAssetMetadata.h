@class NSURL, NSString, NSDate;

@interface AXMVisionFeatureAssetMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *assetURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *localizedTypeDescription;
@property (retain, nonatomic) NSString *TIFFImageDescription;
@property (retain, nonatomic) NSString *IPTCCaptionAbstract;
@property (retain, nonatomic) NSString *EXIFUserComment;
@property (retain, nonatomic) NSString *PNGImageDescription;
@property (retain, nonatomic) NSString *imageAssetLocalIdentifier;
@property (nonatomic) BOOL imageAssetLocallyAvailable;
@property (retain, nonatomic) NSURL *imageAssetPhotoLibraryURL;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *photoLibraryURL;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) BOOL assetLocallyAvailable;

+ (id)assetMetadataFromURL:(id)a0;
+ (id)assetMetadataFromURL:(id)a0 localIdentifier:(id)a1 photoLibraryURL:(id)a2;
+ (id)assetMetadataWithLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 creationDate:(id)a2 UTI:(id)a3;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
