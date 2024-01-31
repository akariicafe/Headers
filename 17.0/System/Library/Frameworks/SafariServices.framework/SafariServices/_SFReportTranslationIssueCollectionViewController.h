@class NSString, NSIndexPath;
@protocol _SFBrowserContentController;

@interface _SFReportTranslationIssueCollectionViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, UITextViewDelegate, _SFReportTranslationIssueReportButtonCellDelegate, _SFReportTranslationIssueFooterDelegate> {
    id<_SFBrowserContentController> _browserContentController;
    BOOL _isTranslationIssueChecked;
    NSIndexPath *_checkedTranslationIssueIndexPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)presentLearnMoreViewController:(id)a0;
- (id)_createCollectionViewLayout;
- (id)_translationIssueForRowAtIndexPath:(id)a0;
- (id)initWithBrowserContentController:(id)a0;
- (void)reportTranslationIssue;

@end
