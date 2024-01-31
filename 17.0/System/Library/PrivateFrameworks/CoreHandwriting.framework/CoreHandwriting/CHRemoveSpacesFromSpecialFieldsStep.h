@class CHPatternNetwork;

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStepModifyingOriginalTokens {
    BOOL _capitalizationToSplit;
    BOOL _convertToLowercase;
    CHPatternNetwork *_patternFST;
    long long _patternType;
}

- (void).cxx_destruct;
- (id)initWithPatternFst:(id)a0 patternType:(long long)a1 capitalizationToSplit:(BOOL)a2 convertToLowercase:(BOOL)a3;
- (id)process:(id)a0 options:(id)a1;

@end
