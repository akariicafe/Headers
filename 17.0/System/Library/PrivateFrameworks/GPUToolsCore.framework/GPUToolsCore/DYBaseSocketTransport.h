@class DYSharedMemoryTransport, NSObject;
@protocol OS_dispatch_source;

@interface DYBaseSocketTransport : DYBaseStreamTransport {
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSourceIsSuspended;
    BOOL _scheduledReadOnWritableSocket;
}

@property (readonly, nonatomic) DYSharedMemoryTransport *smTransportCapture;
@property (readonly, nonatomic) DYSharedMemoryTransport *smTransportDiagnostics;

- (id)init;
- (BOOL)connected;
- (void)_invalidate;
- (struct DYBaseSocketTransportSharedMemoryURLs { id x0; id x1; })createNewSharedMemoryTransportWithUniqueIdentifier:(id)a0 loadCapture:(BOOL)a1 loadDiagnostics:(BOOL)a2;
- (void)destroySharedMemoryTransport;
- (BOOL)relayMessageOverSecondarySharedMemoryTransport:(id)a0 error:(id *)a1;
- (BOOL)relayMessageOverSharedMemoryTransport:(id)a0 error:(id *)a1;
- (void)_destroySharedMemoryTransport;
- (unsigned int)_nextMessageSerial;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (void)_readAndAccumulateLoop;
- (void)_waitEAGAIN;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (void)closeSocketDescriptor;
- (struct DYBaseSocketTransportSharedMemoryURLs { id x0; id x1; })createNewSharedMemoryTransportWithURLs:(struct DYBaseSocketTransportSharedMemoryURLs { id x0; id x1; })a0 uniqueIdentifier:(id)a1 loadCapture:(BOOL)a2 loadDiagnostics:(BOOL)a3;
- (void)runWithSocket:(int)a0;
- (void)scheduleReadOnWritableSocket;
- (void)setPrioritizeOutgoingMessages:(BOOL)a0;

@end
