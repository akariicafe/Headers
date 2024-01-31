@interface PostProcessorFactory : NSObject

+ (id)defaultFactory;

- (id)postProcessorFromReader:(id)a0 originalPixelFormat:(unsigned int)a1 encodedFormat:(unsigned int)a2 encoderType:(id)a3 streamId:(id)a4;

@end
