@class SCNNode;

@interface AVTStickerCamera : NSObject

@property (retain, nonatomic) SCNNode *node;

+ (id)cameraFromDictionary:(id)a0 assetsPath:(id)a1;
+ (id)stickerCameraCache;

- (void).cxx_destruct;
- (id)buildNode;
- (id)initWithCameraNode:(id)a0;

@end
