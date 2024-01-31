@class NSArray, NSString;

@interface UISPasteVariant : NSObject

@property (class, readonly, nonatomic) NSArray *allVariants;

@property (readonly, nonatomic) unsigned int secureName;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSString *glyph;
@property (readonly, nonatomic) NSString *keyInput;
@property (readonly, nonatomic) long long keyModifierFlags;

+ (id)variantForActionIdentifier:(id)a0;
+ (id)variantForSecureName:(unsigned int)a0;
+ (id)variantForSelector:(SEL)a0;

- (void).cxx_destruct;
- (id)localizedStringForLocalization:(id)a0;
- (id)initWithSecureName:(unsigned int)a0 selector:(SEL)a1 actionIdentifier:(id)a2 glpyh:(id)a3 keyInput:(id)a4 keyModifierFlags:(long long)a5;

@end
