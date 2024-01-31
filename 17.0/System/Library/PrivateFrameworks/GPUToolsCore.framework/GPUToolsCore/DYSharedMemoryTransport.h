@class NSURL, DYBaseStreamTransport, NSMutableArray;

@interface DYSharedMemoryTransport : DYBaseStreamTransport {
    struct sm_region_header { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; _Atomic unsigned int x5; unsigned int x6; unsigned int x7; } *_outgoingShmem;
    struct sm_region_header { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; _Atomic unsigned int x5; unsigned int x6; unsigned int x7; } *_incomingShmem;
    struct sm_region_header { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; _Atomic unsigned int x5; unsigned int x6; unsigned int x7; } *_masterSMRegion;
    void *_outgoingBuffer;
    void *_incomingBuffer;
    DYBaseStreamTransport *_relayTransport;
    void /* function */ *_consumeBytesIMP;
    SEL _consumeBytesSEL;
    unsigned int _currentPacketBytesLeft;
    int _mode;
    NSMutableArray *_bufferedMessages;
    char _sendName[64];
    char _receiveName[64];
}

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL deferred;

- (id)init;
- (BOOL)connected;
- (void)dealloc;
- (void)_invalidate;
- (id)connect;
- (void)setUrl:(id)a0;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2 replyQueue:(id)a3 timeout:(unsigned long long)a4 handler:(id /* block */)a5;
- (BOOL)_clientConnect:(id *)a0;
- (id)_getSharedMemoryNameWithSuffix:(id)a0;
- (BOOL)_serverConnect:(id *)a0;
- (void)_setupIOBuffers;
- (void)_copyToSM:(const void *)a0 size:(long long)a1;
- (void)_accumulateMessageBytes;
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)a0;
- (unsigned long long)_computeBytesAvailableToRead;
- (unsigned long long)_computeBytesAvailableToWrite;
- (void)_copyFromSM:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_createAndRunSources:(id *)a0;
- (void)_dequeueIncomingMessages;
- (void)_dequeuePacket;
- (BOOL)_initializeSMRegion:(struct sm_region_header **)a0 size:(unsigned long long)a1 name:(const char *)a2 error:(id *)a3;
- (void *)_mapSharedMemoryFile:(int)a0 size:(unsigned long long)a1 error:(id *)a2;
- (unsigned int)_nextMessageSerial;
- (BOOL)_openSMRegion:(struct sm_region_header **)a0 size:(unsigned long long)a1 name:(const char *)a2 error:(id *)a3;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (void)_relayPacket;
- (void)_tearDownSharedMemory;
- (void)_updateReaderOffset:(unsigned long long)a0;
- (void)_waitEAGAIN;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (id)initWithMode:(int)a0 initialMessageSerial:(unsigned int)a1 uniqueIdentifier:(id)a2;
- (id)initWithMode:(int)a0 uniqueIdentifier:(id)a1;
- (void)setRelayTransport:(id)a0;

@end
