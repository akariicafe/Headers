@interface TIInputManagerHandwriting_ja : TIInputManagerHandwriting

+ (Class)wordSearchClass;

- (void *)initImplementation;
- (id)handleKeyboardInput:(id)a0;
- (id)recognitionLanguage;
- (int)recognitionMode;
- (void)loadFavoniusTypingModel;

@end
