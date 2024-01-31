@class NSArray;

@interface _NTKPhotoIndexGenerator : NSObject {
    long long _n;
    long long _count;
    long long _prevIndex;
    long long _step;
    NSArray *_stepSizes;
}

- (void)setIndex:(long long)a0;
- (id)initWithSize:(long long)a0;
- (void)reset;
- (void).cxx_destruct;
- (long long)nextRandom;
- (long long)nextSequential;

@end
