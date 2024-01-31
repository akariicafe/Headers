@class VKFrameInfo, VNImageRequestHandler;

@interface VKFrame : NSObject

@property (readonly, nonatomic) VNImageRequestHandler *imageRequestHandler;
@property (readonly, nonatomic) struct __CVBuffer { } *CVImageBuffer;
@property (retain, nonatomic) VKFrameInfo *info;

- (void).cxx_destruct;

@end
