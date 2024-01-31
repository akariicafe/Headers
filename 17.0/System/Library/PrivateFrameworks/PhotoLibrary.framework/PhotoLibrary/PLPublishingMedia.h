@class NSString, NSURL;

@interface PLPublishingMedia : NSObject

@property (retain, nonatomic) id asset;
@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSString *pathForVideoFile;
@property (retain, nonatomic) NSURL *assetURL;
@property (nonatomic) BOOL isHDVideo;
@property (nonatomic) double duration;

+ (BOOL)isValidPublishingMedia:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithAsset:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithManagedAsset:(id)a0;
- (id)initWithAVURLAsset:(id)a0;

@end
