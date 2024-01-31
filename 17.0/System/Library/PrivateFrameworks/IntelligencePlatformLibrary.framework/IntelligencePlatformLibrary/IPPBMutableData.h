@interface IPPBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (void)setLength:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)length;
- (void *)mutableBytes;
- (const void *)bytes;

@end
