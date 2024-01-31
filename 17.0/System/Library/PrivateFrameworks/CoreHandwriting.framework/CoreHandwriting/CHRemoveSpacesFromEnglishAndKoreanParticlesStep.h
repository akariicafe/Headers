@class NSCharacterSet;

@interface CHRemoveSpacesFromEnglishAndKoreanParticlesStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet *_koreanParticlesCharSet;
}

- (id)init;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;

@end
