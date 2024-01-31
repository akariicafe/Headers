@class NSDictionary;

@interface TIKeyboardTyperUserModel : NSObject

@property (readonly, nonatomic) BOOL prefersContinuousPath;
@property (readonly, nonatomic) BOOL expectsAppendedSpaceToContinuousPath;
@property (readonly, nonatomic) BOOL baseKeyForVariants;
@property (readonly, nonatomic) BOOL prefersPredictionSelection;
@property (readonly, nonatomic) BOOL prefersSpaceBarDoubleTap;
@property (readonly, nonatomic) BOOL prefersToCorrectErrors;
@property (readonly, nonatomic) BOOL prefersAutocorrectWithRevision;
@property (readonly, nonatomic) float probBeginCorrectingAfterWord;
@property (readonly, nonatomic) float probBeginCorrectingAfterWordTerminator;
@property (readonly, nonatomic) float probRejectBadAutocorrection;
@property (readonly, nonatomic) BOOL prefersAutocorrectForCaps;
@property (readonly, nonatomic) BOOL prefersAutocorrectForApostrophes;
@property (readonly, nonatomic) BOOL decomposeInputString;
@property (readonly, nonatomic) BOOL prefersTransliteration;
@property (readonly, nonatomic) BOOL usePartialCandidates;
@property (readonly, nonatomic) BOOL prefersManualRevisionForBadAutocorrect;
@property (readonly, nonatomic) float averageKeyTapsPerSecond;
@property (readonly, nonatomic) unsigned long long maxPriorSegmentsCheckedForErrors;
@property (readonly, nonatomic) float probTransposeLetters;
@property (readonly, nonatomic) float probTransposeLetterAndSpace;
@property (readonly, nonatomic) float probSkipLetter;
@property (readonly, nonatomic) float probSkipInitialLetter;
@property (readonly, nonatomic) float probSkipRepeatLetter;
@property (readonly, nonatomic) float probSkipSpace;
@property (readonly, nonatomic) float probDoubleTapLetter;
@property (readonly, nonatomic) float probDoubleTapInitialLetter;
@property (readonly, nonatomic) float probSubstituteLetter;
@property (readonly, nonatomic) float probSubstituteInitialLetter;
@property (readonly, nonatomic) float probSubstituteSpace;
@property (readonly, nonatomic) float probExtraneousKey;
@property (readonly, nonatomic) float probExtraneousInitialKey;
@property (readonly, nonatomic) float probExtraneousFinalKey;
@property (readonly, nonatomic) NSDictionary *parameters;

+ (id)modelWithName:(id)a0;
+ (id)defaultModel;
+ (id)typeVariantKeysModel;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
