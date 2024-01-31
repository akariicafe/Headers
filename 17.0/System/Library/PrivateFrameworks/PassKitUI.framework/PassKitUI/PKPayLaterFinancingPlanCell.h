@class PKPayLaterFinancingPlanCellView, PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanCell : PKPayLaterIconCell {
    PKPayLaterFinancingPlanCellView *_view;
}

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) unsigned long long context;
@property (nonatomic) BOOL showSpinner;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (double)minimumHeight;
- (void)setFinancingPlan:(id)a0 context:(unsigned long long)a1 rowIndex:(long long)a2;

@end
