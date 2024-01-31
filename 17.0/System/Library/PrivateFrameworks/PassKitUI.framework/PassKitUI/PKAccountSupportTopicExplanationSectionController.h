@class NSArray;
@protocol PKAccountSupportTopicExplanationSectionControllerDelegate;

@interface PKAccountSupportTopicExplanationSectionController : PKPaymentSetupListSectionController {
    id<PKAccountSupportTopicExplanationSectionControllerDelegate> _delegate;
    NSArray *_items;
}

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)_decorateListCell:(id)a0 forExplanationLink:(id)a1;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithExplanation:(id)a0 delegate:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
