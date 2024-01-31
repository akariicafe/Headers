@class TSCH3DDataBuffer, NSArray, TSCH3DRayPickPipelineDelegate, NSMutableArray;

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DDataBuffer *_buffer;
    NSMutableArray *_pickedPoints;
}

@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } position;
@property (nonatomic) float slack;
@property (retain, nonatomic) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate;
@property (readonly, nonatomic) NSArray *pickedPoints;

- (id)init;
- (void)submit:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)matrix;
- (void)geometry:(id)a0;

@end
