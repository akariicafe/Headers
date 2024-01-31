@class UIBarButtonItemAppearance, NSString, NSDictionary, UIImage, _UINavigationBarVisualProvider, _UINavTitleAppearanceData;

@interface UINavigationBarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver> {
    _UINavTitleAppearanceData *_barTitleData;
}

@property (readonly, nonatomic) _UINavigationBarVisualProvider *visualProvider;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *backButtonAppearance;
@property (readonly, nonatomic) UIImage *backIndicatorImage;
@property (readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)_describeInto:(id)a0;
- (void)_barButtonItemDataChanged:(id)a0;
- (id)_doneButtonAppearance;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (void)_decodeFromCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_plainButtonAppearance;
- (void)_barButtonItemAppearanceChangedItemData:(id)a0 toItemData:(id)a1 fromItemData:(id)a2;
- (id)_backButtonAppearance;
- (id)_barTitleData;
- (id)_plainButtonAppearanceData;
- (id)_doneButtonAppearanceData;
- (void)_copyFromAppearance:(id)a0;
- (id)_backButtonAppearanceData;
- (void).cxx_destruct;
- (void)_setupDefaults;
- (BOOL)_checkEqualTo:(id)a0;
- (void)_completeInit;
- (void)setBackIndicatorImage:(id)a0 transitionMaskImage:(id)a1;

@end
