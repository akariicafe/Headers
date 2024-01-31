@protocol IMPipelineComponent;

@interface IMPipelineComponent : NSObject <IMPipelineComponent>

@property (retain, nonatomic) id<IMPipelineComponent> nextComponent;

+ (id)pipelineFromComponents:(id)a0;

- (void).cxx_destruct;
- (id)runWithInput:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;
- (id)bindTo:(id)a0;

@end
