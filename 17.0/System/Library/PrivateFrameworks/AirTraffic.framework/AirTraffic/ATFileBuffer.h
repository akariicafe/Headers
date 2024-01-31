@class NSFileHandle;

@interface ATFileBuffer : NSObject {
    NSFileHandle *_bufferFileHandle;
    unsigned long long _currentReadLocation;
    unsigned long long _length;
}

- (void)appendData:(id)a0;
- (id)init;
- (unsigned long long)length;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)rewind:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)rewindData:(id)a0;

@end
