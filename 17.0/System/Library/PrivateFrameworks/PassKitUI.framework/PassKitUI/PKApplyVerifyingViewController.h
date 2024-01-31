@class NSString, NSSet, NSDictionary;

@interface PKApplyVerifyingViewController : PKApplyCollectionViewController {
    NSString *_actionIdentifierToSubmit;
    NSSet *_termsIdentifiersToSubmit;
    double _minimumDelayNanoSeconds;
    NSDictionary *_odiAttributesDictionaryToSubmit;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)pageTag;
- (void)_updateSubtitleWithAltTextIfNecessary;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3 actionIdentifierToSubmit:(id)a4 termsIdentifiersToSubmit:(id)a5 odiAttributesDictionaryToSubmit:(id)a6;
- (BOOL)shouldDisplayErrorOnWithdraw;

@end
