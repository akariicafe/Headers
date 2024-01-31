@class NSMutableDictionary;

@interface EMKTextEnumerator : NSObject {
    NSMutableDictionary *_emojiDatasByLanguage;
}

- (id)init;
- (void).cxx_destruct;
- (id)emojiDataForLanguage:(id)a0;
- (void)enumerateEmojiSignifiersInString:(id)a0 touchingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 usingBlock:(id /* block */)a3;

@end
