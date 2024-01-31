@class NSString, PKApplyConfirmInfoSectionController;

@interface PKApplyConfirmInfoViewController : PKApplyCollectionViewController <PKApplyConfirmInfoSectionControllerDelegate> {
    PKApplyConfirmInfoSectionController *_sectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_continueAction;
- (id)pageTag;
- (id)additionalAnalyticsDictionaryForViewAppearing:(BOOL)a0;
- (void)didSelectActionItem:(id)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;

@end
