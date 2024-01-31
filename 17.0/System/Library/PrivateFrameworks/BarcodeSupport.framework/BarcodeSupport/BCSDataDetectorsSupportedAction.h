@class NSString, CNContact, NSArray, DDScannerResult, DDUIAction, UIMenu;

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {
    NSArray *_actions;
    UIMenu *_ddUIMenu;
    DDUIAction *_defaultDDAction;
}

@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shortDescription;
- (void)performAction;
- (void).cxx_destruct;
- (id)url;
- (void)performDefaultAction;
- (id)localizedActionDescription;
- (id)actionPickerItems;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)localizedDefaultActionDescription;
- (id)actionIcon;
- (id)contentPreviewString;
- (id)menuElements;
- (unsigned long long)menuElementsCount;
- (id)_actionStringsArray;
- (id)_hostingViewForAction;
- (void)_performActionAndShowActionPickerIfNeeded:(BOOL)a0;
- (void)_setUpActionMenuIfNeeded;
- (id)debugDescriptionExtraInfoDictionary;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (BOOL)preferItemsInSubmenu;

@end
