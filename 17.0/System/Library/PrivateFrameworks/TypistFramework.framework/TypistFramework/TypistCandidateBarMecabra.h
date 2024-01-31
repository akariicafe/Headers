@interface TypistCandidateBarMecabra : TypistCandidateBar

- (id)init;
- (long long)selectCandidate:(id)a0;
- (void)toggleExtendedCandidateViewMode;
- (id)candidateUIInformation:(id)a0;
- (id)getAllCandidates;
- (long long)getIndexOfCandidate:(id)a0;
- (long long)getIndexOfCandidate:(id)a0 withAlternativeText:(id)a1;
- (id)getVisibleCandidates;
- (BOOL)hasCandidate:(id)a0 withAlternativeText:(id)a1;
- (BOOL)hasCandidate:(id)a0 withAlternativeText:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)hasVisibleCandidate:(id)a0;
- (void)hideExtendedCandidateView;
- (BOOL)isExtendedCandidateViewMode;
- (BOOL)scrollCandidateBar:(int)a0;
- (BOOL)scrollCandidateBarByOneScreen;
- (BOOL)scrollToCandidateOnBar:(id)a0;
- (BOOL)scrollToCandidateOnBarByPosition:(long long)a0;
- (long long)selectCandidateAtIndex:(long long)a0;
- (void)showExtendedCandidateView;

@end
