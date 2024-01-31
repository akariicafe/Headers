@interface TICandidateSorter : NSObject

@property struct __IDXIndex { } *index;
@property struct __CFDictionary { } *radicalToSortPosition;

- (id)init;
- (void)dealloc;
- (BOOL)hasCandidatesFromCandidates:(id)a0 inputString:(id)a1 sortedBy:(unsigned long long)a2 omittingEmoji:(BOOL)a3;
- (id)candidatesFromCandidates:(id)a0 inputString:(id)a1 sortedBy:(unsigned long long)a2 omittingEmoji:(BOOL)a3;
- (id)candidatesSortedByDefaultFromCandidates:(id)a0 omittingEmoji:(BOOL)a1;
- (id)candidatesSortedByEmojiFromCandidates:(id)a0;
- (id)candidatesSortedByRadicalFromCandidates:(id)a0;
- (id)candidatesSortedByYomiFromCandidates:(id)a0 inputString:(id)a1;
- (BOOL)getInfoForCharacter:(id)a0 strokeCount:(unsigned long long *)a1 radicals:(id *)a2 yomis:(id *)a3;
- (BOOL)hasCandidatesSortedByEmojiCategoryFromCandidates:(id)a0;
- (BOOL)hasCandidatesSortedByFacemarkCategoryFromCandidates:(id)a0;
- (BOOL)hasCandidatesSortedByRadicalFromCandidates:(id)a0;
- (BOOL)hasCandidatesSortedByYomiFromCandidates:(id)a0 inputString:(id)a1;

@end
