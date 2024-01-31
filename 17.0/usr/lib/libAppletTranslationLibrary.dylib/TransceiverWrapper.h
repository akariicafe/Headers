@protocol SETransceiver;

@interface TransceiverWrapper : NSObject <SETransceiver> {
    id<SETransceiver> _transceiver;
    struct _CircularBuffer { char *x0; char *x1; char *x2; unsigned long long x3; unsigned char x4[0]; } *_circbuff;
    unsigned char _circBuffStorage[4096];
    BOOL _isMultiOS;
}

+ (id)withTransceiver:(id)a0;

- (void).cxx_destruct;
- (id)transceive:(id)a0 error:(id *)a1;
- (BOOL)applyScript:(id)a0 error:(id *)a1;
- (BOOL)applyScript:(id)a0 ignoreSW:(BOOL)a1 error:(id *)a2;
- (void)dumpAPDUs:(id /* block */)a0;
- (id)initWithTransceiver:(id)a0;
- (id)transceiveAndCheckSW:(id)a0 error:(id *)a1;
- (id)transceiveAndCheckSW:(id)a0 inArray:(id)a1 error:(id *)a2;
- (id)transceiveAndCheckSW:(id)a0 inArray:(id)a1 keepingSW:(BOOL)a2 error:(id *)a3;
- (id)transceiveAndCheckSW:(id)a0 keepingSW:(BOOL)a1 error:(id *)a2;
- (id)transceiveAndGetAllData:(id)a0 withGetMoreData:(id)a1 withMoreDataSW:(unsigned short)a2 withError:(id *)a3;
- (id)transceiveAndGetAllData:(id)a0 withMoreDataSW:(unsigned short)a1 withError:(id *)a2;
- (id)transceiveBytesAndCheckSW:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)transceiveBytesAndCheckSW:(const char *)a0 length:(unsigned long long)a1 inArray:(id)a2 error:(id *)a3;
- (id)transceiveBytesAndCheckSW:(const char *)a0 length:(unsigned long long)a1 inArray:(id)a2 keepingSW:(BOOL)a3 error:(id *)a4;
- (id)transceiveBytesAndCheckSW:(const char *)a0 length:(unsigned long long)a1 keepingSW:(BOOL)a2 error:(id *)a3;

@end
