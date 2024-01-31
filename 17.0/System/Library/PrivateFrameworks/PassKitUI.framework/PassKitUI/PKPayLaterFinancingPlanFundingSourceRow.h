@class NSString, PKPayLaterFinancingPlanFundingSource;
@protocol NSCopying;

@interface PKPayLaterFinancingPlanFundingSourceRow : NSObject <PKPayLaterCollectionViewRow> {
    PKPayLaterFinancingPlanFundingSource *_fundingSource;
    id /* block */ _selectionHandler;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (void)handleCellSelection;
- (id)initWithFinancingPlanFundingSource:(id)a0 selectionHandler:(id /* block */)a1;
- (BOOL)shouldHighlightItem;

@end
