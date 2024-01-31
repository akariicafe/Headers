@class NSURL, MLModel, MLUpdateContext;

@interface PFLModelHandler : NSObject

@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) MLModel *model;
@property (retain, nonatomic) MLUpdateContext *context;

- (void).cxx_destruct;
- (void)evaluateWithDataProvider:(id)a0 completion:(id /* block */)a1;
- (id)initWithModelURL:(id)a0 error:(id *)a1;
- (void)updateOrderedLayerNames:(id)a0 withDataProvider:(id)a1 withPatchModelShapes:(id)a2 withPatchModelData:(id)a3 withModelConfiguration:(id)a4 completion:(id /* block */)a5;

@end
