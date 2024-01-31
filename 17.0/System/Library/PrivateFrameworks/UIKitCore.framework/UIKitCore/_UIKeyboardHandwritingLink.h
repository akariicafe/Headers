@class TIKeyboardCandidateResultSet, NSString, UIResponder;
@protocol UIKeyboardCandidateListDelegate;

@interface _UIKeyboardHandwritingLink : UIResponder <UIKeyboardCandidateListConsumer> {
    UIResponder *_previousResponder;
    UIResponder *_fallbackResponder;
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    BOOL _justDeleted;
}

@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFloatingList;
- (BOOL)isExtendedList;
- (id)init;
- (void)dealloc;
- (id)nextResponder;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (unsigned long long)currentIndex;
- (BOOL)resignFirstResponder;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;
- (id)statisticsIdentifier;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (BOOL)hasCandidates;
- (id)keyboardBehaviors;
- (id)currentCandidate;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (unsigned long long)selectedSortIndex;
- (BOOL)becomeFirstResponder;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (BOOL)showCandidate:(id)a0;
- (void)candidateOutput:(id)a0;
- (void)candidatesUpdated;
- (BOOL)isDeleteCandidate:(id)a0;
- (void)performOutput:(id)a0;
- (void)reloadInputViews;
- (void)sendStrokes:(id)a0;
- (BOOL)shouldRestoreResponder;

@end
