@class NSArray, NSSet;

@interface _EARSpeechRecognition : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *tokenSausage;
@property (readonly, copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, copy, nonatomic) NSArray *nBest;
@property (readonly, copy, nonatomic) NSSet *endsOfSentencePunctuations;

+ (id)reconstructNBestFromSausage:(id)a0 interpretationIndices:(id)a1;
+ (id)tokens:(id)a0 alignedToTokens:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)oneBest;
- (id)_initWithNBestList:(const void *)a0 useHatText:(BOOL)a1 endsOfSentencePunctuations:(id)a2;
- (id)_initWithTokenPhraseChoiceList:(const void *)a0 earNbest:(id)a1 endsOfSentencePunctuations:(id)a2;
- (id)_initWithTokenPhraseChoiceList:(const void *)a0 nBestList:(const void *)a1 endsOfSentencePunctuations:(id)a2;
- (id)_initWithTokenSausage:(id)a0 interpretationIndices:(id)a1 nBest:(id)a2 endsOfSentencePunctuations:(id)a3;
- (struct pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>> { struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x0; void *x1; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *x0; } x2; } x0; struct vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x0; void *x1; struct __compressed_pair<std::vector<std::vector<quasar::Token>> *, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x0; } x2; } x1; })_tokenPhraseChoiceList;
- (id)adjustSpaceForTokens:(id)a0 currTokenIndex:(unsigned long long)a1 endsOfSentencePunctuations:(id)a2 isPotentialCommandRecognition:(BOOL)a3;
- (id)granularizedRecognition;
- (id)oneBestAlignedToTokens:(id)a0;
- (id)potentialCommandRecognition;
- (id)potentialPrecedingRecognition;
- (id)splitRecognitionWithPotentialCommandRecognition:(BOOL)a0;

@end
