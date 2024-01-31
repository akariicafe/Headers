@class UIStackView, NSArray, PKPaletteOptionSwitchCell, PKPaletteOptionButtonCell, UITraitCollection;
@protocol PKPaletteMoreOptionsViewControllerDelegate;

@interface PKPaletteMoreOptionsViewController : UIViewController

@property (retain, nonatomic) UITraitCollection *externalTraitCollection;
@property (retain, nonatomic) NSArray *stackViewPositioningConstraints;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteOptionSwitchCell *autoMinimizeCell;
@property (retain, nonatomic) PKPaletteOptionSwitchCell *shapesCell;
@property (retain, nonatomic) PKPaletteOptionSwitchCell *fingerDrawsCell;
@property (retain, nonatomic) PKPaletteOptionButtonCell *tapToRadarCell;
@property (retain, nonatomic) PKPaletteOptionButtonCell *openPencilSettingsCell;
@property (retain, nonatomic) PKPaletteOptionSwitchCell *hoverPreviewCell;
@property (weak, nonatomic) id<PKPaletteMoreOptionsViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldShowAutoMinimizeOption;
@property (nonatomic) BOOL shouldShowFingerDrawsOption;
@property (nonatomic, getter=isAutoHideOn) BOOL autoHideOn;
@property (nonatomic) BOOL isFingerDrawsOn;
@property (nonatomic) BOOL shouldShowTapToRadarOption;
@property (nonatomic) BOOL shouldShowOpenPencilSettingsOption;
@property (nonatomic) BOOL hoverPreviewOptionVisible;
@property (nonatomic) BOOL isHoverPreviewOn;

- (void)_updateContentSize;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_reloadItems;
- (void)_fingerDrawsCellDidChangeValue:(id)a0;
- (void)_autoMinimizeCellDidChangeValue:(id)a0;
- (double)_contentSizeMinWidth;
- (void)_handleOpenPencilSettingsCellTapped;
- (void)_handleTapToRadarCellTapped;
- (void)_hoverPreviewValueDidChange;
- (BOOL)_isCellInstalled:(id)a0;
- (id)_makeAutoMinimizeCell;
- (id)_makeOpenPencilSettingsCell;
- (id)_makeTapToRadarCell;
- (void)_setIsHoverPreviewOn:(BOOL)a0 updateUI:(BOOL)a1 notify:(BOOL)a2;
- (BOOL)_shouldInstallOpenPencilSettingsCell;
- (BOOL)_shouldInstallTapToRadarCell;
- (BOOL)_shouldRemoveOpenPencilSettingsCell;
- (BOOL)_shouldRemoveTapToRadarCell;
- (void)_updateAutoMinimizeCell;
- (void)_updateFingerDrawsCell;
- (void)_updateHoverPreviewCell;
- (void)updateUIForTraitCollection:(id)a0;

@end
