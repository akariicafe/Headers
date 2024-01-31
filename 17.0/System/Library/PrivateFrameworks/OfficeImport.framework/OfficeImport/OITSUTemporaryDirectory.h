@class NSString;

@interface OITSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

- (id)initWithError:(id *)a0;
- (id)init;
- (void)dealloc;
- (id)URL;
- (id)path;
- (void).cxx_destruct;
- (BOOL)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (id)initForWritingToURL:(id)a0 error:(id *)a1;
- (id)initWithSignature:(id)a0 error:(id *)a1;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (void)leakTemporaryDirectory;

@end
