@class MTLRasterizationRateMapDescriptor;

@interface MTLRasterizationRateLayerArrayInternal : MTLRasterizationRateLayerArray {
    MTLRasterizationRateMapDescriptor *_parent;
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithParent:(id)a0;

@end
