@class CAContext;

@interface CADisplayFlipBook : NSObject {
    void *_impl;
}

@property (retain, nonatomic) CAContext *context;
@property (readonly, nonatomic) unsigned long long capacity;

+ (id)new;

- (void)purge;
- (id)init;
- (void)dealloc;
- (id)description;
- (double)cancelAtTime:(double)a0;
- (BOOL)renderForTime:(double)a0 options:(id)a1 error:(id *)a2;
- (void)setPurgeable;

@end
