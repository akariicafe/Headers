@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray

@property (retain) MLMultiArray *multiArray;

- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)initWrappingMultiArray:(id)a0;

@end
