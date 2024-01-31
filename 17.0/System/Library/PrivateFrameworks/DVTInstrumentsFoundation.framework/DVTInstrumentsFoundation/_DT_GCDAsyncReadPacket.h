@class NSMutableData, NSData;

@interface _DT_GCDAsyncReadPacket : NSObject {
    NSMutableData *buffer;
    unsigned long long startOffset;
    unsigned long long bytesDone;
    unsigned long long maxLength;
    double timeout;
    unsigned long long readLength;
    NSData *term;
    BOOL bufferOwner;
    unsigned long long originalBufferLength;
    long long tag;
}

- (void).cxx_destruct;
- (long long)searchForTermAfterPreBuffering:(long long)a0;
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)a0;
- (id)initWithData:(id)a0 startOffset:(unsigned long long)a1 maxLength:(unsigned long long)a2 timeout:(double)a3 readLength:(unsigned long long)a4 terminator:(id)a5 tag:(long long)a6;
- (unsigned long long)optimalReadLengthWithDefault:(unsigned long long)a0 shouldPreBuffer:(BOOL *)a1;
- (unsigned long long)readLengthForNonTermWithHint:(unsigned long long)a0;
- (unsigned long long)readLengthForTermWithHint:(unsigned long long)a0 shouldPreBuffer:(BOOL *)a1;
- (unsigned long long)readLengthForTermWithPreBuffer:(id)a0 found:(BOOL *)a1;

@end
