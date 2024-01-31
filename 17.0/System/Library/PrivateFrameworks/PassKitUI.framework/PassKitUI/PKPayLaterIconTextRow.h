@class UIColor, NSString, UIFont, UIImage;
@protocol NSCopying;

@interface PKPayLaterIconTextRow : NSObject <PKPayLaterDashboardIconRow> {
    id /* block */ _selectionHandler;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *tertiaryText;
@property (copy, nonatomic) NSString *amountText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) unsigned long long maskType;
@property (nonatomic) unsigned long long accessory;
@property (nonatomic) double minimumHeight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIColor *tertiaryTextColor;
@property (retain, nonatomic) UIColor *amountTextColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (retain, nonatomic) UIFont *tertiaryFont;
@property (retain, nonatomic) UIFont *amountFont;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rowConfiguredForDisputeLayoutWithFinancingPlan:(id)a0 payment:(id)a1 selectionHandler:(id /* block */)a2;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (void)handleCellSelectionWithContinueBlock:(id /* block */)a0;
- (id)initWithPrimaryTitle:(id)a0 identifier:(id)a1 selectionHandler:(id /* block */)a2;
- (BOOL)shouldHighlightItem;

@end
