@class NSInputStream;

@interface AMDByteBuffer : NSObject

@property (retain, nonatomic) NSInputStream *inputStream;
@property unsigned long long readPosition;
@property unsigned long long fileSize;

- (void).cxx_destruct;
- (void)copyDataOfLength:(unsigned long long)a0 toFile:(id)a1 isCompressed:(BOOL)a2 error:(id *)a3;
- (unsigned char)getByteWithError:(id *)a0;
- (id)getDataOfLength:(int)a0 error:(id *)a1;
- (int)getIntWithError:(id *)a0;
- (long long)getLongWithError:(id *)a0;
- (short)getShortWithError:(id *)a0;
- (BOOL)hasRemaining;
- (id)initWithInputStream:(id)a0 withFileSize:(unsigned long long)a1;

@end
