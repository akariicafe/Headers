@interface VIBitVector : NSObject {
    char *_data;
    unsigned long long _numberOfBytes;
    unsigned long long _bitShift;
}

@property (readonly) unsigned long long numberOfBits;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)data;
- (BOOL)checkAtIndex:(unsigned long long)a0;
- (void)clearAtIndex:(unsigned long long)a0;
- (id)initWithNumberOfBits:(unsigned long long)a0;
- (void)setAtIndex:(unsigned long long)a0;

@end
