@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXFileDescriptorTransport : DTXTransport {
    int _inFD;
    int _outFD;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    int _outputWaitKQ;
    NSObject<OS_dispatch_source> *_inputSource;
    id /* block */ _inputReaderBlock;
    id /* block */ _disconnectBlock;
}

- (void)disconnect;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setupWithIncomingDescriptor:(int)a0 outgoingDescriptor:(int)a1 disconnectBlock:(id /* block */)a2;
- (int)_createWriteKQueue:(int)a0;
- (void)_setupReadSource:(int)a0;
- (id)initWithIncomingFileDescriptor:(int)a0 outgoingFileDescriptor:(int)a1 disconnectBlock:(id /* block */)a2;
- (id)initWithIncomingFilePath:(id)a0 outgoingFilePath:(id)a1 error:(id *)a2;
- (id)initWithXPCRepresentation:(id)a0;
- (id)serializedXPCRepresentation;
- (unsigned int)supportedDirections;
- (unsigned long long)transmit:(const void *)a0 ofLength:(unsigned long long)a1;

@end
