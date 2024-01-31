@class NSString, PSSpecifier, OBWelcomeController, UILabel, NSMutableArray;

@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView> {
    PSSpecifier *_specifier;
    UILabel *_headerLabel;
    NSMutableArray *_contentLabels;
    NSMutableArray *_marginConstraints;
}

@property (retain, nonatomic) OBWelcomeController *moreInfoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpecifier:(id)a0;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (id)textView:(id)a0 primaryActionForTextItem:(id)a1 defaultAction:(id)a2;
- (double)preferredHeightForWidth:(double)a0;
- (void)_initializeContent;
- (id)settingsLocString:(id)a0 table:(id)a1;

@end
