@class UIContentSizeCategoryPreference;

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    BOOL _observingNotification;
    BOOL _didCheckForPreferredContentSizeCategoryOverride;
    BOOL _applicationOverridesPreferredContentSizeCategory;
}

@property (retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences;

- (void)_beginObservingPreferredContentSizeChangedNotification;
- (id)initAsSystem;
- (void)checkForChanges;
- (void)dealloc;
- (void)_postContentSizeCategoryDidChangeNotification;
- (id)description;
- (void)setPreferredContentSizeCategory:(id)a0;
- (void).cxx_destruct;
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)a0;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_readAndObservePreferences;
- (void)_updateContentSizeCategory:(id)a0 carPlay:(id)a1 postingNotification:(BOOL)a2;

@end
