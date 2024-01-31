@class NSDictionary, NSData, NSString;

@interface CMIBlackLevelShadingCorrectionThumbnails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int encodingOptions;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSData *compressedData;
@property (readonly, nonatomic) NSString *metadataFileSystemLocation;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_decompressImageFromData:(id)a0;
- (id)initWithCompressedData:(id)a0;
- (id)initWithMetadataPath:(id)a0;

@end
