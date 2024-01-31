@class NSData;

@interface FLTMutableCDMCATISwiftBitVector : FLTCDMCATISwiftBitVector

@property (nonatomic) unsigned long long number_of_bits;
@property (nonatomic) unsigned long long number_of_bytes;
@property (nonatomic) unsigned long long bits_per_block;
@property (nonatomic) unsigned long long bit_shift;
@property (copy, nonatomic) NSData *data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)data:(id /* block */)a0;

@end
