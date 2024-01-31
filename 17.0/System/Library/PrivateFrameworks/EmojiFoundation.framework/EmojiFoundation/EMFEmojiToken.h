@class NSString, NSArray, EMFEmojiLocaleData;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding> {
    BOOL _didFailCEM;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *_baseString;
@property (readonly, copy, nonatomic) NSArray *_skinToneVariantStrings;
@property (readonly, nonatomic) BOOL _shouldHighlightEmoji;
@property (readonly, nonatomic) unsigned short _emojiIndex;
@property (readonly, nonatomic) struct __EmojiTokenWrapper { } *emojiTokenRef;
@property (readonly, nonatomic) EMFEmojiLocaleData *localeData;
@property (readonly, nonatomic) BOOL supportsSkinToneVariants;
@property (readonly, nonatomic) int skinTone;
@property (readonly, nonatomic) NSArray *skinToneSpecifiers;
@property (readonly, nonatomic) NSArray *skinToneChooserVariants;
@property (readonly, copy, nonatomic) NSArray *skinToneVariants;
@property (readonly, nonatomic) NSString *longFormEncodedStringVariantForMultiPersonGrouping;
@property (readonly, nonatomic) NSString *shortFormEncodedStringVariantForMultiPersonGrouping;
@property (readonly, nonatomic) int gender;
@property (readonly, nonatomic) int presentationStyle;
@property (readonly, nonatomic) BOOL isCommon;
@property (readonly, nonatomic) BOOL isNewEmoji;
@property (readonly, nonatomic) BOOL isValid;

+ (id)emojiTokenWithString:(id)a0 localeData:(id)a1;
+ (id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper { } *)a0;
+ (id)emojiTokenWithLongCharacter:(unsigned int)a0 localeData:(id)a1;
+ (id)emojiTokensForCEMEmojiTokens:(struct __CFArray { } *)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithSkinToneVariant:(int)a0;
- (id)copyWithSkinToneVariantSpecifier:(id)a0;
- (id)nameForType:(int)a0;
- (id)copyWithoutModifiers;
- (void)_createEmojiTokenRefIfNecessary;
- (id)copyWithPresentationStyle:(int)a0;
- (id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper { } *)a0;
- (id)initWithString:(id)a0 localeIdentifier:(id)a1;
- (BOOL)isEqualIgnoringModifiers:(id)a0;
- (id)relatedEmojiTokens:(unsigned long long)a0;
- (BOOL)supportsPresentationStyle:(int)a0;

@end
