@class NSString;

@interface MRTextEditingAttributes : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) struct _MRTextInputTraits { unsigned int autocapitalizationType; unsigned int autocorrectionType; unsigned int spellcheckingType; unsigned int keyboardType; unsigned int returnKeyType; struct { long long location; long long length; } validTextRange; BOOL enablesReturnKeyAutomatically; BOOL secureTextEntry; long long PINEntrySeparatorIndexes[10]; unsigned long long PINEntrySeparatorIndexesCount; } inputTraits;

- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 prompt:(id)a1;

@end
