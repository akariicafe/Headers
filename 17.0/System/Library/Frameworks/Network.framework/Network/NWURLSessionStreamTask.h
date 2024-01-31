@class NSURLResponse;

@interface NWURLSessionStreamTask : NWURLSessionTask {
    BOOL _readClosed;
    BOOL _writeClosed;
    NSURLResponse *_storedResponse;
}

- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)closeRead;
- (id)response;
- (BOOL)isKindOfClass:(Class)a0;
- (void)closeWrite;
- (void).cxx_destruct;
- (void)startSecureConnection;
- (void)writeData:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)captureStreams;
- (void)loaderBetterPathAvailable;
- (void)startNextLoad:(BOOL)a0;

@end
