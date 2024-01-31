@class PKPaymentPass, PKPeerPaymentAccount, PKFamilyMember, NSArray, NSString, PKAccount;
@protocol PKPaymentPassActionWidgetViewDelegate;

@interface PKPaymentPassActionWidgetView : UIView {
    NSArray *_displayableWidgets;
    NSString *_phoneNumber;
    NSString *_website;
    NSString *_email;
    BOOL _hasBusinessChatIdentifier;
    unsigned long long _widgetViewStyle;
    BOOL _usesAccessibilityLayout;
    unsigned long long _numberOfWidgetsPerRow;
}

@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (weak, nonatomic) id<PKPaymentPassActionWidgetViewDelegate> delegate;
@property (retain, nonatomic) PKFamilyMember *currentUser;

- (unsigned long long)numberOfRows;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_bankConnectHasDigitalServicing;
- (id)_createButtonForTitle:(id)a0 image:(id)a1;
- (void)_determineWidgetContentWithAvailableWidgets;
- (void)cleanUpExistingWidgets;
- (BOOL)hasEnabledWidgets;
- (BOOL)hasSingleColumnLayout;
- (id)initWithWidgetViewStyle:(unsigned long long)a0;
- (unsigned long long)numberOfRowsWithWidgetsPerRow:(unsigned long long)a0;
- (unsigned long long)numberOfWidgetsPerRowWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)a0;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)a0 rowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)a0 rowSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateNumberOfWidgetsPerRow;
- (void)updateUseAccessibilityLayout;
- (void)updateWidgetsAccessibilityLayoutState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })widgetBoundsForRowWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
