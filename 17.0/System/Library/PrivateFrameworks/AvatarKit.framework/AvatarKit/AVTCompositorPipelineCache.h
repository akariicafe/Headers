@class NSMutableDictionary;
@protocol MTLLibrary;

@interface AVTCompositorPipelineCache : NSObject {
    id<MTLLibrary> _library;
    NSMutableDictionary *_pipelines;
}

+ (id)pipelineForPropertyName:(id)a0 device:(id)a1;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)pipelineForPropertyName:(id)a0;

@end
