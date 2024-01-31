@class NSString, UIImageView, UILabel, AMUIPosterSwitcherSettings;

@interface AMUIPhotosLabelView : UIView <PTSettingsKeyObserver> {
    UILabel *_titleLabel;
    UIImageView *_symbolImageView;
    AMUIPosterSwitcherSettings *_settings;
}

@property (copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double preferredLeadingMargin;
@property (readonly, nonatomic) double preferredTopMargin;
@property (readonly, nonatomic) double preferredBottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (void)willMoveToWindow:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_updateForInterfaceOrientation:(long long)a0;
- (void)_noteWindowWillRotate:(id)a0;
- (id)_symbolImageConfiguration;
- (void)_updateForAmbientDisplayStyle;
- (void)_updateForAmbientDisplayStyleAnimated:(BOOL)a0;
- (void)_updateForWindow:(id)a0;
- (id)initWithSymbolName:(id)a0 title:(id)a1;

@end
