@class NSObject;
@protocol OS_dispatch_queue;

@interface SPRReader : SPRObject {
    NSObject<OS_dispatch_queue> *_relayQueue;
}

- (id)initWithConnector:(id /* block */)a0;
- (void).cxx_destruct;
- (void)readCardWithParameter:(id)a0 callback:(id)a1;
- (BOOL)cancelReadAndReturnError:(id *)a0;
- (void)cancelReadWithCallback:(id)a0;
- (BOOL)cancelReadWithCallback:(id)a0 error:(id *)a1;
- (id)generateSecureReaderBlobWithTrxBlob:(id)a0 pinBlob:(id)a1 error:(id *)a2;
- (id)getCardReaderBlobWithTxnBlob:(id)a0;
- (void)readCardWithParameter:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;
- (BOOL)validateWithReadParameters:(id)a0 error:(id *)a1;

@end
