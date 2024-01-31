@interface _CUIPSDSublayerInfo : NSObject {
    unsigned int _numOfSublayers;
}

+ (id)newWithSublayerCount:(unsigned int)a0 indexSet:(id)a1;

- (unsigned int)numberOfSublayers;
- (unsigned int)sublayerAtIndex:(unsigned int)a0 isValid:(BOOL *)a1;

@end
