@class UIImageView, NSString;

@interface HPSBatteryGroupView : UIView {
    unsigned char batteryPercentNumber;
    UIImageView *batteryGlyphView;
    NSString *batteryLevelDescription;
}

- (void).cxx_destruct;
- (void)createBatteryGroupView:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 batteryPercent:(unsigned char)a1 isCharging:(BOOL)a2 glyph:(id)a3 batteryLevelDescription:(id)a4;

@end
