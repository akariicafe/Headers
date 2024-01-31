@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter>

@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)filterWithInputRadius:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)setSettingInputRadius:(id)a0;
- (id)settingInputRadius;

@end
