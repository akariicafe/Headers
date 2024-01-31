@class NSMutableData;

@interface SAMutableDataOutputStream : SAOutputStream {
    NSMutableData *_outputData;
}

- (int)appendData:(id)a0;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)hasSpaceAvailable;
- (void).cxx_destruct;

@end
