@class NSString;

@interface UIKeyboardEmoji : NSObject

@property (retain, nonatomic) NSString *emojiString;
@property unsigned long long variantMask;
@property (readonly, nonatomic) BOOL supportsSkinToneVariants;

+ (id)emojiWithString:(id)a0 withVariantMask:(unsigned long long)a1;
+ (BOOL)shouldHighlightEmoji:(id)a0;

- (id)key;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 withVariantMask:(unsigned long long)a1;

@end
