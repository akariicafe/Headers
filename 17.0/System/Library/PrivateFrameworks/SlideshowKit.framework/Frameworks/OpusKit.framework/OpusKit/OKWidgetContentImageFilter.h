@class NSURL, CIImage;

@interface OKWidgetContentImageFilter : OKWidgetBasicFilter <JSOKWidgetContentImageFilter> {
    CIImage *_imageOutput;
}

@property (retain, nonatomic) NSURL *inputImageURL;

+ (id)filterWithImageURL:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)setSettingInputImageURL:(id)a0;

@end
