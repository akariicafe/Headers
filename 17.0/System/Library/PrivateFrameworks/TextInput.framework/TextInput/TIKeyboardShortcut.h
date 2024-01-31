@class NSString;

@interface TIKeyboardShortcut : NSObject

@property (retain, nonatomic) NSString *keyEquivalent;
@property unsigned long long modifierFlags;
@property (retain, nonatomic) NSString *displayStringOverride;

+ (BOOL)isMirroringCandidate:(id)a0;
+ (id)localizedKeyboardShortcut:(id)a0 forKeyboardLayout:(id)a1;
+ (id)localizedKeyboardShortcut:(id)a0 forKeyboardLayout:(id)a1 withAttributes:(id)a2;
+ (id)shortcutWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1;
+ (id)findLocalizationForKeyboardShortcut:(id)a0 withModifiers:(unsigned long long)a1 inApplicableOverrides:(id)a2 usingKeyboardType:(unsigned int)a3;
+ (id)localizedKeyboardShortcut:(id)a0 forKeyboardLayout:(id)a1 usingKeyboardType:(unsigned int)a2;
+ (id)shortcutWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1 displayStringOverride:(id)a2;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1;
- (id)initWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1 displayStringOverride:(id)a2;

@end
