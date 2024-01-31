@class CIImage, OKPresentation, NSString;

@interface OKWidgetBasicFilter : CIFilter <OKSettingsSupport>

@property (nonatomic) OKPresentation *inputPresentation;
@property (retain, nonatomic) CIImage *inputImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)inputKeys;
- (void)dealloc;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (id)outputImage;

@end
