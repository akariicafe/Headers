@class NSMutableDictionary;

@interface MPSGraphPackageMLIRLibrary : MPSGraphObject {
    NSMutableDictionary *_mlirLibrary;
}

- (id)init;
- (void).cxx_destruct;
- (id)getDict;
- (id)getOptimizedNoDeviceMLIRLibrary;
- (void)addOptimizedMLIRFile:(id)a0 withSignature:(id)a1;
- (void)addOptimizedNoDeviceMLIRFile:(id)a0 withSignature:(id)a1;
- (void)addOriginalMLIRFile:(id)a0;
- (id)getOptimizedMLIRLibrary;
- (id)initWithMLIRLibraryDict:(id)a0;
- (BOOL)optimizedFileExistsWithSignature:(id)a0;
- (BOOL)optimizedNoDeviceFileExistsWithSignature:(id)a0;
- (BOOL)originalFileExists;
- (void)updateWithMLIRLibrary:(id)a0;

@end
