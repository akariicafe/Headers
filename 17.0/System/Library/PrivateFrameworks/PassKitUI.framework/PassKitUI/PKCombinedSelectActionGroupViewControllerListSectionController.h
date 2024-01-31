@class NSArray, UICollectionViewCellRegistration;
@protocol PKCombinedSelectActionGroupViewControllerListSectionControllerDelegate;

@interface PKCombinedSelectActionGroupViewControllerListSectionController : PKDynamicListSectionController {
    NSArray *_actionGroups;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) id<PKCombinedSelectActionGroupViewControllerListSectionControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)defaultListLayout;
- (void)didSelectItem:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 actionGroups:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
