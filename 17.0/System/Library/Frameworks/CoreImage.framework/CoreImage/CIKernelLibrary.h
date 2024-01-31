@class NSSet, NSObject;
@protocol MTLLibrary, OS_dispatch_data;

@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> *_data;
    id<MTLLibrary> _library;
    NSSet *_extern_function_names;
    NSSet *_stitchable_function_names;
}

@property (readonly) unsigned long long functionCount;
@property (readonly) unsigned long long digest;

+ (id)cache;
+ (void)clearCache;
+ (id)coreImageDylibWithDevice:(id)a0;
+ (id)cachedLibraryWithURL:(id)a0 error:(id *)a1;
+ (id)internalLibraryWithName:(id)a0 device:(id)a1;
+ (id)libraryWithURL:(id)a0 error:(id *)a1;
+ (id)libraryWithData:(id)a0 error:(id *)a1;
+ (id)libraryWithSource:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)newSpecializedFunctionWithDescriptor:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)newFunctionWithName:(id)a0;
- (void)initFunctionNames;
- (id)functionNames;
- (id)functionWithName:(id)a0;
- (id)initWithSource:(id)a0 error:(id *)a1;
- (id)newSpecializedFunctionWithName:(id)a0 constants:(void *)a1;

@end
