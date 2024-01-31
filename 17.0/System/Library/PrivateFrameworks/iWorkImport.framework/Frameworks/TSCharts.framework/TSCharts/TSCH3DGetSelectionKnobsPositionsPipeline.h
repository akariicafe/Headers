@class TSCH3DGetSelectionKnobsPositionsPipelineDelegate, NSArray, TSCH3DChartRep, NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator> {
    TSCH3DChartRep *_rep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *_sceneObjectDelegate;
    NSArray *_selection;
    float _normalizedKnobRadius;
}

@property (readonly, nonatomic) NSMutableArray *projectedPoints;

+ (id)pipelineWithRep:(id)a0 scene:(id)a1 selection:(id)a2 normalizedKnobRadius:(float)a3;

- (void).cxx_destruct;
- (BOOL)render;
- (void)getSelectionKnobsPositions:(id)a0;
- (id)initWithRep:(id)a0 scene:(id)a1 selection:(id)a2 normalizedKnobRadius:(float)a3;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (id)makeDelegateWithScene:(id)a0;
- (id)makeDelegateWithSceneObject:(id)a0 scene:(id)a1;

@end
