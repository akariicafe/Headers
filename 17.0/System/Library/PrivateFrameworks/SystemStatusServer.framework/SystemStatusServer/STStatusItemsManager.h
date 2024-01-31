@class STBundleManager, NSString, NSDictionary, STSystemStatusDefaults;
@protocol BSDefaultObserver;

@interface STStatusItemsManager : NSObject <STBundleManagerObserver, BSDebugDescriptionProviding> {
    STBundleManager *_bundleManager;
    NSDictionary *_visualDescriptors;
    STSystemStatusDefaults *_systemStatusDefaults;
    id<BSDefaultObserver> _internalDefaultsObserver;
    BOOL _allowAllStatusItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithDefaults:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)validStatusItemsForStatusItems:(id)a0;
- (void)_registerForInternalDefaultsChanges;
- (void)_updateSupportedStatusItemsAndVisualDescriptorsFromBundleRecords;
- (void)recordBundlesChangedForBundleManager:(id)a0;
- (id)resolvedStatusItemFromStatusItems:(id)a0;
- (id)visualDescriptorForStatusItemWithIdentifier:(id)a0;

@end
