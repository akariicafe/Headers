@interface PXGComponentDataStore : NSObject {
    char *_data;
}

@property (readonly, nonatomic) unsigned long long elementSize;
@property (nonatomic) long long capacity;

- (id)init;
- (void)dealloc;
- (const void *)contents;
- (id)mutableCopy;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)byteSize;
- (id)initWithElementSize:(unsigned long long)a0;

@end
