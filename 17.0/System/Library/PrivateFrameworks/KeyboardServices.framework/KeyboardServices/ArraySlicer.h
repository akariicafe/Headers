@class NSArray;

@interface ArraySlicer : NSObject {
    unsigned long long _sliceSize;
    unsigned long long _count;
    unsigned long long _offset;
    NSArray *_array;
}

@property (readonly, nonatomic) unsigned long long remaining;

- (id)consumed;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0 sliceSize:(unsigned long long)a1;
- (id)nextSlice;
- (id)unconsumed;

@end
