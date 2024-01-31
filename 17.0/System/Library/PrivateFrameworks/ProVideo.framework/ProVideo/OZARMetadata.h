@class NSArray, NSString;

@interface OZARMetadata : NSObject <NSSecureCoding, OZSimplyCodable, OZSimplyMetadataItemConvertible>

@property (class, readonly, nonatomic) NSArray *sceneDepthMediaCharacteristics;
@property (class, readonly, nonatomic) NSArray *personSegmentationMediaCharacteristics;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct opaqueCMFormatDescription { } *)createMetadataFormat;
+ (id)createWithMetadataItem:(id)a0 error:(out id *)a1;
+ (id)decompressedData:(id)a0 error:(out id *)a1;
+ (long long)metadataCompressionAlgorithm;
+ (struct opaqueCMFormatDescription { } *)metadataFormat;
+ (id)metadataItemIdentifier;
+ (id)simplyDecodeFromData:(id)a0 error:(out id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)compressedDataWithError:(out id *)a0;
- (id)metadataItemWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 error:(out id *)a1;
- (id)simplyEncode:(out id *)a0;

@end
