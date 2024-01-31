@interface MMapStruct : NSObject {
    int _fd;
}

@property (readonly, nonatomic) void *buffer;
@property (readonly, nonatomic) unsigned long long size;

+ (id)mMapStructWithFilepath:(id)a0;

- (void)dealloc;
- (id)initWithBuffer:(void *)a0 size:(unsigned long long)a1;

@end
