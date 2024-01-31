@interface PXStoryCurationLengthInfo : NSObject

@property (readonly, nonatomic) unsigned long long availableCurationLengths;
@property (readonly, nonatomic) unsigned long long defaultCurationLength;

- (id)init;
- (id)initWithAvailableLengths:(unsigned long long)a0 defaultLength:(unsigned long long)a1;

@end
