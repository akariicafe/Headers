@class PFMetadata, NSString;

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent

@property (class, readonly) Class requestClass;

@property (retain, nonatomic) PFMetadata *metadata;
@property struct CGSize { double width; double height; } imageDimensions;
@property BOOL preflighted;
@property (nonatomic) unsigned int firstVideoTrackCodec;
@property (nonatomic) BOOL containsVideoWithFormatEligibleForTranscoding;
@property (readonly, nonatomic) BOOL containsProResVideoWithFormatEligibleForTranscoding;
@property (readonly, nonatomic) BOOL containsHEVCVideo;
@property (readonly, nonatomic) BOOL containsImageWithFormatEligibleForTranscoding;
@property (readonly, nonatomic) BOOL containsHEIFImage;
@property (retain, nonatomic) NSString *livePhotoPairingIdentifier;
@property BOOL didCheckForLivePhotoPairingIdentifier;
@property BOOL didCheckForVideoWithFormatEligibleForTranscoding;
@property (nonatomic) long long locationMetadataStatus;
@property (nonatomic) long long captionMetadataStatus;
@property (nonatomic) long long accessibilityDescriptionMetadataStatus;
@property (readonly, nonatomic) id transcodingEligibleVideoTrackFormatDescription;
@property (copy) NSString *renderOriginatingSignature;

+ (id)imageSourceForFileURL:(id)a0;
+ (id)videoSourceForFileURL:(id)a0;
+ (id)imageSourceForFileURL:(id)a0 dimensions:(struct CGSize { double x0; double x1; })a1;
+ (id)sourceForFileURL:(id)a0;
+ (id)sourceForFileURL:(id)a0 mediaType:(long long)a1 imageDimensions:(struct CGSize { double x0; double x1; })a2;

- (BOOL)isHDR;
- (void).cxx_destruct;
- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)a0;
- (void)markContainsVideoEligibleForTranscodingAsCheckedWithValue:(BOOL)a0 codec:(unsigned int)a1;
- (BOOL)preflightWithError:(id *)a0;
- (void)checkForAccessibilityDescriptionData;
- (void)checkForCaptionData;
- (void)checkForImageEligibleForTranscoding;
- (void)checkForLivePhotoPairingIdentifier;
- (void)checkForLocationData;
- (void)checkForVideoEligibleForTranscoding;
- (BOOL)determineMediaTypeFromPathExtensionWithError:(id *)a0;
- (void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:(long long)a0;
- (void)markCaptionMetadataAsCheckedWithStatus:(long long)a0;
- (void)markLocationMetadataAsCheckedWithStatus:(long long)a0;
- (long long)sourceAccessibilityDescriptionMetadataStatus;
- (long long)sourceCaptionMetadataStatus;
- (long long)sourceLocationMetadataStatus;

@end
