@interface MTLGPUDebugLibrary : MTLToolsLibrary

- (id)newFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 completionHandler:(id /* block */)a3;
- (id)newIntersectionFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 completionHandler:(id /* block */)a2;
- (id)newFunctionWithName:(id)a0;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (void)newIntersectionFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (void)newFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 error:(id *)a3;
- (id)initWithLibrary:(id)a0 device:(id)a1;

@end
