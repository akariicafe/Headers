@class NSString, SFUCryptoKey, NSObject;
@protocol TSUStreamReadChannel, OS_dispatch_queue, OS_dispatch_data;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {
    id<TSUStreamReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_readChannelQueue;
    SFUCryptoKey *_decryptionKey;
    NSObject<OS_dispatch_data> *_holdData;
    char *_iv;
    unsigned long long _ivRead;
    struct _CCCryptor { } *_cryptor;
    char *_buffer;
    unsigned long long _initialBytesIgnored;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (void)readWithQueue:(id)a0 handler:(id /* block */)a1;
- (id)initWithReadChannel:(id)a0 decryptionKey:(id)a1;

@end
