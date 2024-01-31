@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (nonatomic) BOOL inUse;

- (void)dealloc;
- (id)initWithAsset:(id)a0;

@end
