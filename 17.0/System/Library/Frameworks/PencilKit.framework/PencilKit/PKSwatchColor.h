@class UIColor, NSString;

@interface PKSwatchColor : NSObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)swatchColor:(id)a0 identifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 identifier:(id)a1;

@end
