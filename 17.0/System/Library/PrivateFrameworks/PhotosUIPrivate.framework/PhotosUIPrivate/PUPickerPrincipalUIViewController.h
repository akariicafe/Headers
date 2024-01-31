@class NSError, PUPickerConfiguration, NSDate, NSString, NSOrderedSet, NSMutableDictionary, PUAssetPickerCoordinator, NSMutableSet, NSLayoutConstraint, PXLoadingStatusManager, NSFileProviderManager, NSFileProviderDomain;

@interface PUPickerPrincipalUIViewController : UIViewController <_UIAppearanceRestriction, PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableViewControllerDelegate, _PUPickerExtensionContextVendorInterface, PXChangeObserver, NSExtensionRequestHandling>

@property (retain, nonatomic) PUPickerConfiguration *configuration;
@property (retain, nonatomic) NSError *configurationError;
@property (retain, nonatomic) NSFileProviderManager *manager;
@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (retain, nonatomic) NSError *domainError;
@property (retain, nonatomic) PUAssetPickerCoordinator *coordinator;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint;
@property (retain, nonatomic) NSMutableSet *programmaticallySelectedItemIdentifiers;
@property (retain, nonatomic) NSOrderedSet *selectedObjectIDs;
@property (retain, nonatomic) NSDate *selectionDate;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (retain, nonatomic) NSMutableDictionary *progressSubscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (BOOL)shouldDebounceDidFinishPicking:(id)a0 previousSelectedObjectIDs:(id)a1 previousSelectionDate:(id)a2;

- (void)updateViewConstraints;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_deselectAssetsWithIdentifiers:(id)a0;
- (void)_scrollContentToInitialPosition;
- (void)_zoomOutContent;
- (void)_moveAssetWithIdentifier:(id)a0 afterIdentifier:(id)a1;
- (void)_pickerUnavailableViewControllerCancelButtonTapped:(id)a0;
- (void)_popViewControllerWithReply:(id /* block */)a0;
- (void)_searchWithString:(id)a0;
- (void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)a0;
- (void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)a0;
- (void)_updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updatePickerUsingUpdateConfiguration:(id)a0;
- (void)_updateSelectedAssetsWithIdentifiers:(id)a0;
- (void)_zoomInContent;
- (void)confirmConfidentialWarning:(id)a0 completionHandler:(id /* block */)a1;
- (void)confirmUserSafetyIntervention:(id)a0 completionHandler:(id /* block */)a1;
- (void)coordinator:(id)a0 didFinishPicking:(id)a1 additionalSelectionState:(id)a2;
- (void)finishPicking:(id)a0 additionalSelectionState:(id)a1;
- (void)finishProgress:(id)a0 progressURL:(id)a1 trackingID:(id)a2 observation:(id)a3;
- (void)logExitIfNeeded:(id)a0;
- (id /* block */)showProgress:(id)a0 forAsset:(id)a1 progressURL:(id)a2;
- (void)updateModalInPresentation;
- (BOOL)updatePicker;

@end
