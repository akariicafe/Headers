@class NSMutableArray;

@interface BBMaskedSet : NSObject {
    unsigned long long _maskBits;
}

@property (retain, nonatomic) NSMutableArray *maskObjectSets;

- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0 withMask:(unsigned long long)a1;
- (void)_executeUsingMask:(unsigned long long)a0 block:(id /* block */)a1;
- (id)allObjects;
- (id)objectsForMask:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)initWithMaskBits:(unsigned long long)a0;

@end
