@class NSLocale;

@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens {
    NSLocale *_locale;
}

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;

@end
