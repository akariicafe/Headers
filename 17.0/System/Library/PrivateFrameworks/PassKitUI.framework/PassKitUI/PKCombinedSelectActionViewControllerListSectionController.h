@class NSArray, UICollectionViewCellRegistration;
@protocol PKCombinedSelectActionViewControllerListSectionControllerDelegate;

@interface PKCombinedSelectActionViewControllerListSectionController : PKDynamicListSectionController {
    NSArray *_actions;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) id<PKCombinedSelectActionViewControllerListSectionControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)defaultListLayout;
- (void)didSelectItem:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
