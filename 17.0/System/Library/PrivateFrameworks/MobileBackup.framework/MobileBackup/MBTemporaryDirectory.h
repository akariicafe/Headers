@class NSString;

@interface MBTemporaryDirectory : NSObject {
    NSString *_identifier;
    NSString *_path;
    char *_fsRepPath;
    BOOL _disposed;
}

@property (readonly, nonatomic) NSString *path;

+ (id)sharedTemporaryDirectoryForTesting;
+ (id)sharedTemporaryDirectoryIdentifiedBy:(id)a0;
+ (id)temporaryDirectoryOnSameVolumeAsPath:(id)a0 identifiedBy:(id)a1 error:(id *)a2;
+ (id)userTemporaryDirectoryForPersona:(id)a0 identifiedBy:(id)a1;
+ (id)userTemporaryDirectoryForTesting;

- (void)dealloc;
- (BOOL)dispose;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithExistingFsRepPath:(char *)a0 identifier:(id)a1;
- (BOOL)_purgeContentsAt:(id)a0 error:(id *)a1;
- (BOOL)disposeWithError:(id *)a0;
- (id)makeTemporaryFilePath;
- (BOOL)purgeContentsWithError:(id *)a0;

@end
