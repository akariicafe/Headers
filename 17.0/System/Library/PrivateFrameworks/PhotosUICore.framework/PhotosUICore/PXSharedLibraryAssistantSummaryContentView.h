@class NSString, UIImageView, UILabel, PXSharedLibraryAssistantViewModel;

@interface PXSharedLibraryAssistantSummaryContentView : UIView <PXChangeObserver> {
    UIImageView *_topImageView;
    UILabel *_countsLabel;
    UILabel *_peopleLabel;
    UILabel *_dateLabel;
}

@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateIcon;
- (void)_initializeSubviews;
- (void)_updateCountsLabel;
- (void)_updateDateLabel;
- (void)_updatePeopleLabel;

@end
