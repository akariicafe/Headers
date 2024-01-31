@class NSString;

@interface SampleTimeBuffer : NSObject {
    struct vector<CMTime, std::allocator<CMTime>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::allocator<CMTime>> { struct *__value_; } __end_cap_; } _times;
}

@property (copy, nonatomic) NSString *name;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (id)timeline;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)appendTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
