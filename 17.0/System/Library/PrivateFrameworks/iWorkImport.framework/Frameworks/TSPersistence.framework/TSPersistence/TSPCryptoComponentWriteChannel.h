@class NSString, NSObject;
@protocol OS_dispatch_data, TSPMutableCryptoInfo, OS_dispatch_semaphore, TSPComponentWriteChannel;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    id<TSPComponentWriteChannel> _writeChannel;
    id<TSPMutableCryptoInfo> _encryptionInfo;
    unsigned long long _bufferSize;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    char *_buffer;
    NSObject<OS_dispatch_data> *_bufferDispatchData;
    unsigned long long _bufferPosition;
    unsigned long long _remainingBufferSize;
    struct _CCCryptor { } *_cryptor;
    struct { unsigned int ctx[96]; } _ccHmacContext;
    unsigned long long _encodedBlockLength;
    unsigned long long _decryptedBlockLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (BOOL)_resetBuffer;
- (BOOL)_finalizeBlockForClosing:(BOOL)a0;
- (BOOL)_initializeBlock;
- (void)_writeData:(id)a0 isDecryptedData:(BOOL)a1;
- (id)initWithWriteChannel:(id)a0 encryptionInfo:(id)a1;
- (id)initWithWriteChannel:(id)a0 encryptionInfo:(id)a1 bufferSize:(unsigned long long)a2;

@end
