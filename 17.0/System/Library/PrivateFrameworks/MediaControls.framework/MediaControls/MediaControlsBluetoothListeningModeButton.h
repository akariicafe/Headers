@class UIColor, NSSet, NSString;

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton

@property (retain, nonatomic) UIColor *offColor;
@property (retain, nonatomic) NSSet *availableListeningModes;
@property (retain, nonatomic) NSString *selectedListeningMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playRequiresBothBudsInEarErrorHaptic;
- (void)setSelectedListeningMode:(id)a0 animated:(BOOL)a1;
- (id)initForControlCenter;
- (void).cxx_destruct;

@end
