@class NSArray, NSDictionary, CIKernel;
@protocol MTLComputePipelineState;

@interface UniKernelInternal : NSObject

@property (retain) CIKernel *ck;
@property (retain) id<MTLComputePipelineState> mk;
@property (copy, nonatomic) id /* block */ roiCallback;
@property (retain) NSArray *arguments;
@property (retain) NSDictionary *constants;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 library:(id)a1 constants:(id)a2;
- (id)_dictToConstants:(id)a0 functionConstants:(id)a1 name:(id)a2;
- (id)initWithName:(id)a0 metalLibrary:(id)a1 coreImageLibrary:(id)a2 pipelineLibrary:(id)a3 constants:(id)a4;

@end
