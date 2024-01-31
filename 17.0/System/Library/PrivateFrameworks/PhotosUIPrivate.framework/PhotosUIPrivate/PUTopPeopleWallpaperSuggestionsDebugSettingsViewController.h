@class UIButton, UISegmentedControl, UIView;
@protocol PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate;

@interface PUTopPeopleWallpaperSuggestionsDebugSettingsViewController : UIViewController {
    UIButton *_closeButton;
    UISegmentedControl *_segmentedControl;
    UIView *_contentView;
    UIView *_filteringSettingsView;
    UIView *_scoringSettingsView;
    UIView *_distancingSettingsView;
}

@property (weak) id<PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate> delegate;

- (void)_close:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_switchSettings:(id)a0;

@end
