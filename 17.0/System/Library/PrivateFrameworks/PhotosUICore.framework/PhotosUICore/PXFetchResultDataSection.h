@class PHFetchResult;

@interface PXFetchResultDataSection : PXDataSection

@property (readonly, nonatomic) PHFetchResult *fetchResult;

- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndex:(long long)a0;
- (long long)count;
- (id)initWithFetchResult:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithOutlineObject:(id)a0;

@end
