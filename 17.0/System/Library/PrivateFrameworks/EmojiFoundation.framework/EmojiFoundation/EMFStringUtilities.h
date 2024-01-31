@interface EMFStringUtilities : NSObject

+ (id)professionSkinToneEmojiBaseKey:(id)a0;
+ (id)_baseStringForEmojiString:(id)a0;
+ (id)_coupleSkinToneChooserVariantsForString:(id)a0;
+ (id)_multiPersonStringForString:(id)a0 skinToneVariantSpecifier:(id)a1;
+ (id)_skinToneChooserVariantsForString:(id)a0;
+ (id)_skinToneSpecifiersForString:(id)a0;
+ (id)_stringWithUnichar:(unsigned int)a0;
+ (BOOL)_emojiString:(id)a0 containsSubstring:(id)a1;
+ (id)_baseFirstCharacterString:(id)a0;
+ (id)_coupleStringWithLeftPerson:(id)a0 leftVariant:(id)a1 joiningString:(id)a2 rightPerson:(id)a3 rightVariant:(id)a4;
+ (unsigned int)_firstLongCharacterOfString:(id)a0;
+ (BOOL)_genderEmojiBaseStringNeedVariantSelector:(id)a0;
+ (BOOL)_hasSkinToneVariantsForString:(id)a0;
+ (id)_joiningStringForCoupleString:(id)a0;
+ (id)_normalizeMultiPersonGroupToLongFormEncoding:(id)a0;
+ (id)_normalizeMultiPersonGroupToShortFormEncoding:(id)a0;
+ (id)_preferenceIndexString:(id)a0;
+ (id)_skinToneChooserArraysForCoupleType:(long long)a0 joiner:(id)a1;
+ (id)_skinToneChooserVariantsForHandHoldingCoupleType:(long long)a0;
+ (id)_skinToneChooserVariantsForString:(id)a0 usesSilhouetteSpecifiers:(BOOL)a1;
+ (int)_skinToneForString:(id)a0;
+ (int)_skinToneModifierFromSpecifierType:(id)a0;
+ (id)_skinToneSuffixFromSpecifierType:(id)a0;
+ (id)_skinToneVariantsForCouple:(long long)a0 joiner:(id)a1;
+ (id)_skinToneVariantsForMultiPersonType:(long long)a0;
+ (id)_skinToneVariantsForString:(id)a0;
+ (id)_tokenizedHandshakeFromString:(id)a0;
+ (id)_tokenizedMultiPersonFromString:(id)a0;
+ (long long)multiPersonTypeForString:(id)a0;
+ (id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)a0;

@end
