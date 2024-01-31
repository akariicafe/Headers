@class NSArray, NSMutableDictionary, TIInputMode;

@interface CIMCandidateData : NSObject

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (nonatomic) int sortingMethod;
@property (retain, nonatomic) NSArray *storedCandidates;
@property (retain, nonatomic) NSMutableDictionary *candidateInfoCache;

+ (BOOL)shouldShowZhuyinSortingMethod;
+ (id)sortTitleFromSortingMethod:(int)a0;

- (void)setCandidates:(id)a0;
- (id)init;
- (void)clearCache;
- (void).cxx_destruct;
- (id)initWithInputMode:(id)a0;
- (void)addCharacter:(id)a0 groupLabel:(id)a1 dictionary:(id)a2 isSecondary:(BOOL)a3;
- (id)candidateGroupsFromDictionary:(id)a0 sortedKeys:(id)a1;
- (id)candidatesSortedByEmoji:(id)a0;
- (id)candidatesSortedByFrequency:(id)a0 omittingEmoji:(BOOL)a1;
- (id)candidatesSortedByMethod:(int)a0 omittingEmoji:(BOOL)a1;
- (id)candidatesSortedByPinyinOrZhuyin:(id)a0 simplified:(BOOL)a1 zhuyin:(BOOL)a2;
- (id)candidatesSortedByRadical:(id)a0 simplified:(BOOL)a1 collationLocale:(id)a2;
- (id)candidatesSortedByStrokes:(id)a0 simplified:(BOOL)a1;
- (id)candidatesSortedByWubi:(id)a0 omittingEmoji:(BOOL)a1;
- (void)sortCharactersByStrokeCount:(id)a0 wordPropertiesDictionary:(id)a1;
- (id)wordPropertyDictionaryForCandidates:(id)a0 isSimplified:(BOOL)a1;

@end
