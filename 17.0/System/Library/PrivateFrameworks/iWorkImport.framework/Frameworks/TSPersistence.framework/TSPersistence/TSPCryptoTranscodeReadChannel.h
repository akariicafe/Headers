@class NSString;
@protocol TSUStreamReadChannel, TSPMutableCryptoInfo;

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel> {
    id<TSUStreamReadChannel> _readChannel;
    id<TSPMutableCryptoInfo> _encryptionInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)init;
- (void).cxx_destruct;
- (void)readWithHandler:(id /* block */)a0;
- (id)initWithReadChannel:(id)a0 decryptionInfo:(id)a1 encryptionInfo:(id)a2;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
