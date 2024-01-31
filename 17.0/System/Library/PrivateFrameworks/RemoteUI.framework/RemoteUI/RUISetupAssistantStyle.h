@class RUISetupAssitantLayout;

@interface RUISetupAssistantStyle : RUIStyle

@property (retain, nonatomic) RUISetupAssitantLayout *setupAssistantLayout;

- (id)_backgroundColor;
- (id)init;
- (void).cxx_destruct;
- (void)applyToLabel:(id)a0;
- (void)applyToObjectModel:(id)a0;
- (id)insetGroupedCellBackgroundColor;
- (void)_applyToFooter:(id)a0 view:(id)a1;
- (void)_applyToTitleLabel:(id)a0;
- (void)applyToNavigationBar:(id)a0;
- (id)barBackgroundImageForUserInterfaceStyle:(long long)a0;
- (BOOL)supportActivityIndicatorInPinView;

@end
