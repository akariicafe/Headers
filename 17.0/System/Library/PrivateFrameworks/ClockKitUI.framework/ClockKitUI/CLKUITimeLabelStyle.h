@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying>

@property (retain, nonatomic) CLKFont *threeDigitFont;
@property (retain, nonatomic) CLKFont *fourDigitFont;
@property (retain, nonatomic) CLKFont *designatorFont;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
