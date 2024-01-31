@class NSData;

@interface _DT_GCDAsyncWritePacket : NSObject {
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (void).cxx_destruct;
- (id)initWithData:(id)a0 timeout:(double)a1 tag:(long long)a2;

@end
