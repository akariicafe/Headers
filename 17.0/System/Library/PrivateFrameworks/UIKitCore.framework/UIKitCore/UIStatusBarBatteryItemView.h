@class UIImage, _UILegibilityImageSet, UIView;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {
    int _capacity;
    int _state;
    BOOL _batterySaverModeActive;
    UIView *_accessoryView;
}

@property (retain, nonatomic) _UILegibilityImageSet *cachedImageSet;
@property (nonatomic) int cachedCapacity;
@property (nonatomic) BOOL cachedImageHasAccessoryImage;
@property (nonatomic) unsigned long long cachedBatteryStyle;
@property (nonatomic) int cachedAXHUDCapacity;
@property (nonatomic) unsigned long long cachedAXHUDStyle;
@property (retain, nonatomic) UIImage *cachedAXHUDImage;

- (id)accessibilityHUDRepresentation;
- (id)_accessoryImage;
- (double)legibilityStrength;
- (id)contentsImage;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_batteryOffsetWithBackground:(id)a0;
- (id)_contentsImage;
- (BOOL)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (double)extraRightPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
