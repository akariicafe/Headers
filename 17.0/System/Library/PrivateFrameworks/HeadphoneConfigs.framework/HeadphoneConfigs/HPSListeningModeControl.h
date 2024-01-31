@class BluetoothDevice, UILabel, NSMutableArray, UISegmentedControl;

@interface HPSListeningModeControl : PSTableCell {
    UISegmentedControl *_segmentedControl;
    UILabel *_labelAutoANC;
    UILabel *_labelTransparency;
    UILabel *_labelOff;
    UILabel *_labelNoiseCancellation;
    UILabel *_labelUnableToSetListeningMode;
    BluetoothDevice *_device;
    BOOL _autoANCSupported;
}

@property (retain, nonatomic) NSMutableArray *modeControlLabelXPositionConstraints;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)initCommon;
- (void)_handleListeningModeSetFailure:(int)a0 index:(long long)a1;
- (void)_updateLabelLayoutForBounds;
- (void)addModeLabels;
- (void)addModeOptions;
- (long long)getIndexFromListeningMode:(int)a0;
- (int)getListeningModeFromIndex:(long long)a0;
- (id)getListeningModeString:(int)a0;
- (void)refreshListeningMode;
- (void)segmentControlValueChanged:(id)a0;
- (void)settingsChangedHandler:(id)a0;

@end
