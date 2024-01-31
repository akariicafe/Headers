@interface SGRadarSuggestion : SGRadarSuggestionBase

+ (id)tapToRadarImage;

- (id)suggestionImage;
- (id)suggestionCategoryImage;
- (id)suggestionPrimaryAction;
- (void)_dismissViewController:(id)a0 andSignalCompletionWithResult:(BOOL)a1;
- (id)_writeEMLtoDiskForMessageWithIdentifier:(id)a0;

@end
