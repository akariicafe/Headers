@class NSData, NSMutableData;

@interface CRXUBitBuffer : NSObject {
    NSData *_inputData;
    NSMutableData *_outputData;
    const char *_inputPtr;
    const char *_inputEndPtr;
    char *_outputPtr;
    unsigned char _curInputByte;
    unsigned long long _bitCount;
    unsigned long long _bitOffset;
    unsigned long long _bitOffsetInByte;
}

@property (readonly, nonatomic) unsigned long long bitCount;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)nextByte;
- (void)rewind;
- (BOOL)readBool:(BOOL *)a0;
- (id)initWithMutableData:(id)a0;
- (BOOL)writeBool:(BOOL)a0;
- (BOOL)readData:(id)a0 bitWidth:(unsigned long long)a1;
- (BOOL)readUInteger:(unsigned long long *)a0 bitWidth:(unsigned long long)a1;
- (BOOL)skipBits:(unsigned long long)a0;
- (BOOL)writeData:(id)a0 bitWidth:(unsigned long long)a1;
- (BOOL)writeUInteger:(unsigned long long)a0 bitWidth:(unsigned long long)a1;

@end
