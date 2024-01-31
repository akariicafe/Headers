@class NSString, NSArray, AVURLAsset, NSURL, NSData, AVAssetDownloadContentConfiguration;

@interface AVAssetDownloadConfiguration : NSObject <NSSecureCoding> {
    AVURLAsset *_asset;
    NSString *_title;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    NSURL *_destinationURL;
    BOOL optimizesAuxiliaryContentConfigurations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_asset) AVURLAsset *asset;
@property (readonly, nonatomic, getter=_assetTitle) NSString *assetTitle;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (copy, nonatomic, getter=_destinationURL, setter=_setDestinationURL:) NSURL *destinationURL;
@property (copy, nonatomic) NSData *artworkData;
@property (readonly, nonatomic) AVAssetDownloadContentConfiguration *primaryContentConfiguration;
@property (copy, nonatomic) NSArray *auxiliaryContentConfigurations;
@property (nonatomic) BOOL optimizesAuxiliaryContentConfigurations;

+ (id)downloadConfigurationWithAsset:(id)a0 title:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct FigStreamingAssetDownloadConfig { } *)_copyFigDownloadConfig;
- (id)initWithAsset:(id)a0 title:(id)a1;

@end
