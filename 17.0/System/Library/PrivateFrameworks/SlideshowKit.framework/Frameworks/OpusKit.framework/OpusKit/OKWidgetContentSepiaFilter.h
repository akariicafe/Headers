@class NSNumber;

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter <JSOKWidgetContentSepiaFilter>

@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)filterWithIntensity:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)setSettingInputIntensity:(id)a0;
- (id)settingInputIntensity;

@end
