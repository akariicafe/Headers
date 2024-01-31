@class NSString;

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary

@property (copy, nonatomic) NSString *filePath;

- (id)newRenderPipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (void)dealloc;
- (id)newComputePipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)initWithLibrary:(id)a0 parent:(id)a1 filePath:(id)a2;

@end
