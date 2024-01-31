@class IKColor, UIColor, NSArray;

@interface TVColor : NSObject <NSCopying>

@property (readonly, weak, nonatomic) IKColor *ikColor;
@property (readonly, nonatomic) long long colorType;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) NSArray *gradientColors;
@property (readonly, nonatomic) NSArray *gradientPoints;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
