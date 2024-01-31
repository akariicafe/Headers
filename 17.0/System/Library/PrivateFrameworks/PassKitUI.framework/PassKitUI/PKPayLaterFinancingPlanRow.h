@class UIImage, NSString, PKPayLaterFinancingPlan;
@protocol NSCopying;

@interface PKPayLaterFinancingPlanRow : NSObject <PKPayLaterDashboardIconRow> {
    PKPayLaterFinancingPlan *_financingPlan;
    long long _rowIndex;
    id /* block */ _selectionHandler;
}

@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL showSpinner;
@property (copy, nonatomic) NSString *tertiaryText;
@property (copy, nonatomic) NSString *amountText;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long maskType;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (void)handleCellSelectionWithContinueBlock:(id /* block */)a0;
- (id)initWithFinancingPlan:(id)a0 rowIndex:(long long)a1 selectionHandler:(id /* block */)a2;
- (BOOL)shouldHighlightItem;

@end
