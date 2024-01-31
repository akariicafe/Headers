@interface SortHueEntry : NSObject

@property (nonatomic) long long hue;
@property (nonatomic) long long count;

- (id)description;
- (id)initWithHue:(unsigned int)a0 count:(unsigned int)a1;

@end
