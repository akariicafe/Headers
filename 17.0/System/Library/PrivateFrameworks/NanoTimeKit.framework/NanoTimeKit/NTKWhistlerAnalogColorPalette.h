@class CLKDevice;

@interface NTKWhistlerAnalogColorPalette : NSObject {
    CLKDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)secondHandColorForColorPalette:(id)a0;
- (id)handStrokeColorForColorPalette:(id)a0;
- (id)bezelTextColorForColorPalette:(id)a0;
- (id)complicationForegroundColorPalette:(id)a0;
- (id)dialFillColorForColorPalette:(id)a0;
- (id)handFillColorForColorPalette:(id)a0;
- (id)hourTicksColorForColorPalette:(id)a0;
- (id)minuteTicksColorForColorPalette:(id)a0;
- (id)platterTextColorForColorPalette:(id)a0;

@end
