@class NSArray;

@interface FTMutableTTSPhonemeSequence : FTTTSPhonemeSequence

@property (copy, nonatomic) NSArray *word_phonemes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
