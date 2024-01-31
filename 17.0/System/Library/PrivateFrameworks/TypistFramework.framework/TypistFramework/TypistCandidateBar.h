@interface TypistCandidateBar : NSObject

+ (id)candidatesAsStringArray:(id)a0;
+ (id)initWithTypistKeyboard:(id)a0;

- (id)init;
- (BOOL)hasCandidates;
- (long long)selectCandidate:(id)a0;
- (id)candidateUIInformation:(id)a0;
- (struct CGPoint { double x0; double x1; })centerOfCandidate:(id)a0;
- (id)getAllCandidates;
- (double)getCandidateBarHeight;
- (double)getCandidateBarWidth;
- (long long)getIndexOfCandidate:(id)a0;
- (id)getVisibleCandidates;
- (BOOL)hasCandidate:(id)a0;
- (BOOL)hasCandidate:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)hasCandidates:(id)a0;
- (BOOL)hasCandidates:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)hasVisibleCandidate:(id)a0;
- (long long)selectCandidateAtIndex:(long long)a0;

@end
