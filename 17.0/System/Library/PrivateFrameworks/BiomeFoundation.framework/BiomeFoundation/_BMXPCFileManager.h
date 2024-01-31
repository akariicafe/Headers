@class NSString, BMXPCConnectionWrapper;

@interface _BMXPCFileManager : BMFileManager <BMFileManagerImpl> {
    unsigned long long _domain;
    BMXPCConnectionWrapper *_connectionWrapper;
    NSString *_useCase;
    unsigned int _user;
}

+ (id)globalWeakConnectionCache;

- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;
- (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
- (id)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 error:(id *)a3;
- (BOOL)_removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1 useCase:(id)a2 domain:(unsigned long long)a3 user:(unsigned int)a4;
- (void).cxx_destruct;
- (id)_newConnectionForDomain:(unsigned long long)a0;
- (id)_connectionForDomain:(unsigned long long)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (void)_configureConnection:(id)a0;

@end
