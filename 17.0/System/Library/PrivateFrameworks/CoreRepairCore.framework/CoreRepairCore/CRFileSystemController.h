@class NSString;

@interface CRFileSystemController : NSObject {
    NSString *tmpFDRDataPathStr;
    NSString *fdrDataPathStr;
}

+ (id)sharedSingleton;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (BOOL)_mountBindFSFrom:(const char *)a0 To:(const char *)a1 withFlag:(int)a2;
- (long long)commitToFileSystem;
- (id)setupFileSystemForRepair;

@end
