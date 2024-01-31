@class NSString, NSArray, NSUUID, _LTDisambiguationNode, NSMutableArray;
@protocol _LTDisambiguableSentenceHistoryProviding, _LTDisambiguableSentenceDelegate;

@interface _LTDisambiguableSentence : NSObject <_LTDisambiguableSentenceHistoryProviding, NSSecureCoding, NSCopying> {
    NSMutableArray *_history;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<_LTDisambiguableSentenceDelegate> delegate;
@property (weak, nonatomic) id<_LTDisambiguableSentenceHistoryProviding> historyProvider;
@property (readonly, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSArray *targetPhrases;
@property (nonatomic) unsigned long long selectedPhraseIndex;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) _LTDisambiguationNode *selectedTargetPhrase;
@property (readonly, nonatomic) BOOL hasDisambiguations;
@property (readonly, nonatomic) NSString *targetText;
@property (readonly, copy, nonatomic) NSArray *history;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)menuConfigurationsForLinkIndex:(unsigned long long)a0;
- (id)_directedEdgeFromUnvalidatedEdge:(id)a0;
- (id)_genderForLinkIndex:(unsigned long long)a0 inPhraseIndex:(unsigned long long)a1;
- (id)_generateAttributedStringForLocation:(unsigned long long)a0 result:(id)a1 excludedTypes:(id)a2 globalAttributes:(id)a3 attributeProvider:(id /* block */)a4;
- (BOOL)_hasOverlapInRangeArray:(id)a0;
- (id)_historyForEncoding;
- (id)_includedTypesFromDelegate;
- (id)_includedTypesFromExcludedTypes:(id)a0;
- (void)_insertPrefix:(id)a0;
- (id)_preferredEdgeFromEdgesWithDuplicateMeaning:(id)a0 forLinkIndex:(unsigned long long)a1 inPhrase:(unsigned long long)a2;
- (unsigned long long)_preferredGenderFromEdgesWithDuplicateMeaning:(id)a0 forLinkIndex:(unsigned long long)a1 inPhrase:(unsigned long long)a2;
- (void)_removeUnvalidatedAdjacencyLists;
- (BOOL)_restoreChanges:(id)a0;
- (id)_userSelectionFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)_validateAndPopulateEdges;
- (void)addNodeIndexToHistory:(unsigned long long)a0;
- (BOOL)hasDisambiguationsOfType:(unsigned long long)a0;
- (id)initWithSourceText:(id)a0 targetPhrases:(id)a1 selectedPhraseIndex:(unsigned long long)a2;
- (id)meaningDescriptionForLinkIndex:(unsigned long long)a0 inTargetPhrase:(unsigned long long)a1;
- (id)sourceTextSnippetForLinkIndex:(unsigned long long)a0;

@end
