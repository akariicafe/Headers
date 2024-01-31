@class NSDictionary;

@interface BRLTJapaneseProcessor : NSObject {
    NSDictionary *_kataToHira;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isWordDescriptionLike:(id)a0;
- (id)longVowelExpressedFor:(id)a0 partOfSpeech:(long long)a1;
- (id)replaceKataWithHira:(id)a0;
- (id)spacedYomiOfWordDescription:(id)a0;

@end
