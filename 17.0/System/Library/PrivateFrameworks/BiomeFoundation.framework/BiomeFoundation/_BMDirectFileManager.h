@class NSString, BMFileHandle;

@interface _BMDirectFileManager : BMFileManager <BMFileManagerImpl> {
    NSString *_directory;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _setUpLock;
    BMFileHandle *_directoryHandle;
}

- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;
- (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
- (id)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 error:(id *)a3;
- (BOOL)setUpWithError:(id *)a0;
- (BOOL)_removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)_openTemporaryDirectoryWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1;

@end
