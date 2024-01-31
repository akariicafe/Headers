@class NSData;

@interface AFBBufRef : NSObject {
    NSData *_data;
    struct __CFAllocator { } *_cfReleaseBackingDataDeallocator;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) struct __CFAllocator { } *deallocator;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)releaseBuf;
- (void)retainBuf;

@end
