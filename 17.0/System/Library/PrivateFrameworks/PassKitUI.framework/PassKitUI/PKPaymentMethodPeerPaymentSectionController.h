@class PKPaymentPass, NSArray, NSString, PKPeerPaymentAccount, UICollectionViewCellRegistration, PKPaymentRequest;
@protocol PKPaymentMethodSectionControllerDelegate;

@interface PKPaymentMethodPeerPaymentSectionController : NSObject <PKDynamicSectionController, PKPaymentMethodCollectionViewCellDelegate> {
    id<PKPaymentMethodSectionControllerDelegate> _delegate;
    PKPaymentPass *_peerPaymentPass;
    PKPaymentRequest *_request;
    PKPeerPaymentAccount *_account;
    BOOL _useAppleCashBalance;
}

@property (readonly, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)paymentMethodCellDidToggleItem:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)initWithDelegate:(id)a0 request:(id)a1 useAppleCashBalance:(BOOL)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
