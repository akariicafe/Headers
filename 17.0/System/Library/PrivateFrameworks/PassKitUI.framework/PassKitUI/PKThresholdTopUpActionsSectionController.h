@class NSString, NSArray, UICollectionViewCellRegistration;
@protocol PKThresholdTopUpActionsSectionControllerDelegate;

@interface PKThresholdTopUpActionsSectionController : NSObject <PKDynamicSectionController> {
    BOOL _existingThresholdTopUp;
    id<PKThresholdTopUpActionsSectionControllerDelegate> _delegate;
    BOOL _cancelInProgress;
}

@property (retain, nonatomic) NSString *cancelTitle;
@property (readonly, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithExistingThresholdTopUp:(BOOL)a0 delegate:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
