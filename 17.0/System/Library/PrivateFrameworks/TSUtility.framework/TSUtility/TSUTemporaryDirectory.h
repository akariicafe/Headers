@class NSString;

@interface TSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

- (id)init;
- (void)dealloc;
- (id)URL;
- (id)path;
- (void)leakTemporaryDirectory;
- (void)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1;
- (id)initWithSignature:(id)a0;

@end
