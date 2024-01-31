@class CLKUIColoringLabel;

@interface NTKBatteryCircularSmallComplicationView : NTKCircularSmallRingTextComplicationView {
    CLKUIColoringLabel *_label;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void).cxx_destruct;
- (void)_updateForTemplateChange;

@end
