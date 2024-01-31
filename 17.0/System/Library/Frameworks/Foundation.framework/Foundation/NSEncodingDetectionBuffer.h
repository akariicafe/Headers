@class NSEncodingDetectionPlaceholder;

@interface NSEncodingDetectionBuffer : NSObject {
    unsigned long long _nsEncoding;
    unsigned int _cfEncoding;
    NSEncodingDetectionPlaceholder *_placeholder;
    char *_bytes;
    BOOL _bytesAllocated;
    unsigned long long _bytesIndex;
    unsigned long long _bytesLength;
}

- (void)dealloc;
- (BOOL)_growBufferIfNeededToAccomodateByteCount:(unsigned long long)a0;
- (void)appendByte1:(unsigned char)a0 byte2:(unsigned char)a1;
- (void)appendByte1:(unsigned char)a0 byte2:(unsigned char)a1 byte3:(unsigned char)a2;
- (void)appendByte1:(unsigned char)a0 byte2:(unsigned char)a1 byte3:(unsigned char)a2 byte4:(unsigned char)a3;
- (void)appendByte:(unsigned char)a0;
- (void)appendBytes:(const char *)a0 count:(unsigned long long)a1;
- (void)appendPlaceholder;
- (void)appendUTF16Char:(unsigned short)a0;
- (void)appendUTF32Char:(unsigned int)a0;
- (id)initWithNSStringEncoding:(unsigned long long)a0 CFStringEncoding:(unsigned int)a1 stackBuffer:(char *)a2 bufferLength:(unsigned long long)a3 placeholder:(id)a4;
- (id)stringWithLossySubsitutionString:(id)a0;

@end
