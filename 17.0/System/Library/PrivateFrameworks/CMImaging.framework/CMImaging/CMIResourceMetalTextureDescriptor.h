@class NSDictionary;
@protocol MTLCommandBuffer;

@interface CMIResourceMetalTextureDescriptor : NSObject

@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (nonatomic) unsigned int matchingPixelBufferFormat;
@property (retain, nonatomic) NSDictionary *attachments;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;

- (id)init;
- (void).cxx_destruct;

@end
