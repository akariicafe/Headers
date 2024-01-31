@interface TypistKeyboardEmoji : TypistKeyboard

+ (id)findEmojiScrollView;
+ (void)resetSelectedCategory;
+ (BOOL)scrollEmojiKeyboard;

- (id)init:(id)a0 options:(id)a1;
- (id)generateKeystrokeStream:(id)a0;
- (void)preprocessing;

@end
