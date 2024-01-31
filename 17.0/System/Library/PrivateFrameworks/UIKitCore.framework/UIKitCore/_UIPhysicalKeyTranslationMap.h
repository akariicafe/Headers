@class NSMapTable;

@interface _UIPhysicalKeyTranslationMap : NSObject

@property (readonly, nonatomic) NSMapTable *translationMap;
@property (readonly) unsigned int keyCode;
@property (readonly) unsigned int keyAction;
@property (readonly) long long originalModifiers;

+ (BOOL)supportsSecureCoding;
+ (void)enumerateAllCombinationsOfModifiers:(long long)a0 staticModifiers:(long long)a1 usingBlock:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allTranslations;
- (BOOL)areModifiers:(long long)a0 minimalExcessOfMask:(long long)a1 matching:(id)a2 translator:(id)a3 matchedModifierSubset:(long long *)a4 betterMatchFound:(BOOL *)a5;
- (id)initWithKeyCode:(unsigned short)a0 action:(unsigned int)a1 modifiers:(long long)a2;
- (BOOL)keyTranslation:(id *)a0 withModifiers:(long long)a1;
- (id)keyTranslationWithModifiers:(long long)a0 translator:(id)a1;
- (void)populateAllCombinationsOfModifiers:(long long)a0 translator:(id)a1;
- (void)setKeyTranslation:(id)a0 modifiers:(long long)a1;

@end
