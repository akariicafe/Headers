@class NSString, BMFileManager;

@interface BMFileServer : NSObject <BMFileServer> {
    NSString *_directory;
    BMFileManager *_fileManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)entitledToAccessClientCompute:(id)a0 error:(id *)a1;
- (void)configureConnectionForUseCase:(id)a0 reply:(id /* block */)a1;
- (void)temporaryFileHandleWithProtection:(int)a0 reply:(id /* block */)a1;
- (id)currentUseCase;
- (void)createDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)removeFileAtPath:(id)a0 reply:(id /* block */)a1;
- (id)initWithDirectory:(id)a0;
- (BOOL)entitledToAccessStream:(id)a0 withMode:(int)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 reply:(id /* block */)a3;
- (void)removeDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 reply:(id /* block */)a3;

@end
