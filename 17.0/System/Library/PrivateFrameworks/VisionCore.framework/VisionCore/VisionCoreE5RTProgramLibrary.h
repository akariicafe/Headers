@class NSString, NSDictionary, NSURL, NSArray, VisionCoreE5RTProgramLibraryCompilationOptions;

@interface VisionCoreE5RTProgramLibrary : NSObject <NSCopying> {
    VisionCoreE5RTProgramLibraryCompilationOptions *_compilationOptions;
    NSArray *_lazyFunctionNames;
    NSString *_lazyName;
}

@property (readonly, nonatomic) struct e5rt_program_library { } *programLibraryHandle;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *buildInfo;
@property (readonly, copy, nonatomic) NSArray *functionNames;

+ (id)compileModelSource:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)isProgramLibraryAtURL:(id)a0;
+ (id)programLibraryForURL:(id)a0 error:(id *)a1;
+ (id)compileFromURL:(id)a0 options:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metadataForFunctionNamed:(id)a0 error:(id *)a1;
- (id)_initWithURL:(id)a0 compilationOptions:(id)a1 ownedProgramLibraryHandle:(struct e5rt_program_library **)a2;
- (id)functionNamed:(id)a0 error:(id *)a1;

@end
