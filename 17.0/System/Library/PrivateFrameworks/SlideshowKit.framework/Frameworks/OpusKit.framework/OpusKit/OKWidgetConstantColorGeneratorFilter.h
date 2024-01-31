@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter

@property (retain, nonatomic) CIColor *inputColor;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)setSettingInputColor:(id)a0;

@end
