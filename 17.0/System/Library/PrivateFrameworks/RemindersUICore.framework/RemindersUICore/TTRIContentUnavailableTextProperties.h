@class UIColor, UIFont;

@interface TTRIContentUnavailableTextProperties : TTRIUIContentUnavailableShim

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;

+ (Class)implClass;

- (id)asUIKit;

@end
