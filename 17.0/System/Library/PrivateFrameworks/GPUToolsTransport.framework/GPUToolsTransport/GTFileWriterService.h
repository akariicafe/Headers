@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore, OS_os_log, GTURLAccessProvider, OS_dispatch_queue, GTRemoteConnectionProvider;

@interface GTFileWriterService : NSObject <GTFileWriterService> {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_sessions;
    id<GTRemoteConnectionProvider> _remoteConnectionProvider;
    unsigned long long _sessionCounts;
    NSString *_deviceUDID;
    NSObject<OS_dispatch_queue> *_fileTransferQueue;
    id<GTURLAccessProvider> _urlAccessProvider;
    NSObject<OS_dispatch_semaphore> *_writeSem;
}

- (void).cxx_destruct;
- (void)initiateTransfer:(id)a0 basePath:(id)a1 fromDevice:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)_finishSession:(unsigned long long)a0 error:(id *)a1;
- (void)beginTransferSessionWithFileEntries:(id)a0 basePath:(id)a1 toDevice:(id)a2 options:(id)a3 sessionID:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (id)initWithRemoteConnectionProvider:(id)a0 deviceUDID:(id)a1 urlAccessProvider:(id)a2;
- (void)initiateTransfer:(id)a0 basePath:(id)a1 fromDevice:(id)a2 toURL:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)startTransfer:(id)a0 basePath:(id)a1 fromDevice:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)writeFileData:(id)a0 sessionID:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
