@interface CATIBitVector : NSObject {
    unsigned long long _bitsPerBlock;
    unsigned long long _bitShift;
    char *_data;
}

@property (readonly) unsigned long long numberOfBits;
@property (readonly) unsigned long long numberOfBytes;

- (void)dealloc;
- (id)data;
- (BOOL)testAtIndex:(unsigned long long)a0;
- (id)initWithNumberOfBits:(unsigned long long)a0;
- (void)setAtIndex:(unsigned long long)a0;

@end
