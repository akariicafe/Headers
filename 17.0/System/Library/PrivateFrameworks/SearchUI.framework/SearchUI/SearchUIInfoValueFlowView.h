@class SearchUIRowModel, NSString, SFInfoTuple, NSMutableArray;
@protocol SearchUIInfoSizingDelegate, SearchUIFeedbackDelegate;

@interface SearchUIInfoValueFlowView : NUIContainerFlowView <TLKContainerButtonDelegate>

@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) NSMutableArray *infoValueViews;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIInfoSizingDelegate> sizingDelegate;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (retain, nonatomic) SFInfoTuple *tuple;
@property (nonatomic) BOOL isFirstValueProminent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reloadViews;
- (void)didSelectButton:(id)a0;
- (id)menuForButton:(id)a0;
- (void)configureInfoValueView:(id)a0 withValue:(id)a1;
- (void)configureShowMoreInfoValueView:(id)a0 forTuple:(id)a1;

@end
