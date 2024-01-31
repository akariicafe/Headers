@class NSData;

@interface PQLNameInjectionBase : NSData {
    unsigned long long _length;
    char *_bytes;
}

@property (readonly, nonatomic) NSData *sql;

- (void)dealloc;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithData:(id)a0;
- (const void *)bytes;

@end
