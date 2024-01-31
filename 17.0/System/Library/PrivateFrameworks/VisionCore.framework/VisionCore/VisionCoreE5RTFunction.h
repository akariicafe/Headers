@class VisionCoreE5RTProgramLibrary, NSString, NSDictionary, NSArray;

@interface VisionCoreE5RTFunction : NSObject <NSCopying> {
    NSArray *_lazyInputNames;
    NSArray *_lazyOutputNames;
    NSDictionary *_cachedInputDescriptors;
    NSDictionary *_cachedOutputDescriptors;
}

@property (readonly, nonatomic) struct e5rt_program_function { } *functionHandle;
@property (readonly, nonatomic) VisionCoreE5RTProgramLibrary *programLibrary;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSArray *inputs;
@property (readonly, copy, nonatomic) NSArray *outputs;
@property (readonly, copy, nonatomic) NSArray *inputDescriptors;
@property (readonly, copy, nonatomic) NSArray *outputDescriptors;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newExecutionContextWithConfiguration:(id)a0 error:(id *)a1;
- (id)descriptorForInput:(id)a0 error:(id *)a1;
- (id)descriptorForOutput:(id)a0 error:(id *)a1;
- (id)descriptorOfClass:(Class)a0 forInput:(id)a1 error:(id *)a2;
- (id)descriptorOfClass:(Class)a0 forOutput:(id)a1 error:(id *)a2;
- (id)descriptorsForInputs:(id)a0 error:(id *)a1;
- (id)descriptorsForOutputs:(id)a0 error:(id *)a1;
- (id)initWithProgramLibrary:(id)a0 name:(id)a1 ownedFunctionHandle:(struct e5rt_program_function **)a2;

@end
