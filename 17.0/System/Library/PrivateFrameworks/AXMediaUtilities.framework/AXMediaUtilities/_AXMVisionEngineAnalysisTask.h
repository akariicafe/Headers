@class NSUUID, AXMSourceNode, AXMVisionPipelineContext;

@interface _AXMVisionEngineAnalysisTask : AXMTask

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) AXMVisionPipelineContext *context;
@property (retain, nonatomic) AXMSourceNode *source;

+ (id)itemWithSource:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 context:(id)a1;

@end
