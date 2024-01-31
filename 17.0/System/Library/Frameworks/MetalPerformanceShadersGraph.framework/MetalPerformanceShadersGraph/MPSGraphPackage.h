@class NSURL, NSFileManager, NSMutableDictionary;

@interface MPSGraphPackage : MPSGraphObject {
    NSURL *_packageURL;
    NSURL *_temporaryPackageURL;
    NSFileManager *_fileManager;
    NSMutableDictionary *_plistRoot;
    unsigned long long _mlirFileCount;
}

- (void).cxx_destruct;
- (void)createBytecodeFromMlirModule:(struct ModuleOp { struct Operation *x0; })a0 fileHandle:(id)a1;
- (id)createFileHandle;
- (void)createVersionedBytecodeFromMlirModule:(struct ModuleOp { struct Operation *x0; })a0 packageKey:(id)a1 fileHandle:(id)a2;
- (id)findLatestPackage;
- (id)getMLIRLibrary;
- (id)getPackageKeyForPlatform:(unsigned long long)a0 andMinimumDeploymentTarget:(struct MPSGraphVersion { long long x0; long long x1; long long x2; })a1;
- (id)getPlistData;
- (id)initWithPackageURL:(id)a0 temporaryPackageURL:(id)a1 append:(BOOL)a2;
- (id)initWithSourcePackageURL:(id)a0;
- (void)setMLIRLibrary:(id)a0 withPackageKey:(id)a1;

@end
