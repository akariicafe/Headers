@interface ENQueryFilter : NSObject {
    char *_filterBuffer;
    unsigned long long *_hashSalts;
}

@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) unsigned long long hashCount;

- (id)init;
- (void)dealloc;
- (void)addPossibleRPI:(const void *)a0;
- (id)initWithBufferSize:(unsigned long long)a0 hashCount:(unsigned long long)a1;
- (BOOL)shouldIgnoreRPI:(const void *)a0;

@end
