@class NSUndoManager, NSString;
@protocol PXSuggestLessPeopleHelperDelegate;

@interface PXSuggestLessPeopleHelper : NSObject <PXSuggestLessPeopleSelectionViewControllerDelegate, PXSuggestLessPeopleOptionSelectionViewControllerDelegate>

@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (weak, nonatomic) id<PXSuggestLessPeopleHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUndoManager:(id)a0;
- (void)_showSuggestLessOptionForPerson:(id)a0 completionHandler:(id /* block */)a1;
- (void)_showSuggestLessPeopleSelectionForPeople:(id)a0 completionHandler:(id /* block */)a1;
- (void)_suggestLessPeople:(id)a0 withSuggestLessOption:(long long)a1 undoManager:(id)a2 completionHandler:(id /* block */)a3;
- (void)completeActionWithCompletionHandler:(id /* block */)a0;
- (void)completeOptionSelectionActionWithCompletionHandler:(id /* block */)a0;
- (void)didSelectPersonToSuggestLess:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissOptionSelectionViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestLessPeople:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestLessPeople:(id)a0 withSuggestLessOption:(long long)a1 undoManager:(id)a2 completionHandler:(id /* block */)a3;
- (void)suggestLessPeopleFromAssets:(id)a0 completionHandler:(id /* block */)a1;

@end
