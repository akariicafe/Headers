@class UIColor;

@interface PXGGradient : NSObject <NSCopying>

@property (readonly, copy, nonatomic) UIColor *startingColor;
@property (readonly, copy, nonatomic) UIColor *endingColor;
@property (readonly, nonatomic) long long direction;

- (id)init;
- (unsigned long long)hash;
- (id)initWithStartingColor:(id)a0 endingColor:(id)a1 direction:(long long)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
