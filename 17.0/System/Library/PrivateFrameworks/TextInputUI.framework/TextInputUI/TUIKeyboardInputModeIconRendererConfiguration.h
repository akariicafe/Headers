@class UIColor, NSString;

@interface TUIKeyboardInputModeIconRendererConfiguration : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double baseFontSize;
@property (nonatomic) long long style;
@property (copy, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *artwork;

- (void).cxx_destruct;

@end
