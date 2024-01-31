@class UIColor, UIFont, NSString, NSAttributedString, PKGradientVerticalConnector;
@protocol NSCopying;

@interface PKPayLaterProgressRow : NSObject <PKPayLaterCollectionViewRow>

@property (nonatomic) BOOL showChevron;
@property (readonly, nonatomic) long long rowIndex;
@property (copy, nonatomic) NSAttributedString *primaryText;
@property (copy, nonatomic) NSAttributedString *secondaryText;
@property (copy, nonatomic) NSAttributedString *tertiaryText;
@property (copy, nonatomic) NSAttributedString *amountText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIColor *tertiaryTextColor;
@property (retain, nonatomic) UIColor *amountTextColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (retain, nonatomic) UIFont *amountFont;
@property (nonatomic) double minimumHeight;
@property (retain, nonatomic) PKGradientVerticalConnector *topConnector;
@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector;
@property (nonatomic) unsigned long long targetType;
@property (nonatomic) BOOL centerPrimaryText;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_purchaseStringsForInstallmentNumber:(unsigned long long)a0 title:(id *)a1 amountString:(id *)a2 dynamicContentPage:(id)a3;
+ (id)progressRowsWithInstallmentCount:(long long)a0 firstRowFont:(id)a1 dynamicContentPage:(id)a2;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (void)handleCellSelection;
- (id)initWithRowIndex:(long long)a0 primaryText:(id)a1 secondaryText:(id)a2 amountText:(id)a3 selectionHandler:(id /* block */)a4;
- (id)initWithRowIndex:(long long)a0 selectionHandler:(id /* block */)a1;
- (BOOL)shouldHighlightItem;

@end
