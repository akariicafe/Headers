@class NSString;

@interface AVTStickerShaderModifierProperty : NSObject

@property (retain, nonatomic) id originalValue;
@property (readonly, nonatomic) id effectiveValue;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) id value;

+ (id)shaderModifierPropertyCache;
+ (id)shaderModifierPropertyFromDictionary:(id)a0 assetsPath:(id)a1;

- (void).cxx_destruct;
- (id)dictionaryWithTargetPath:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 value:(id)a2 originalValue:(id)a3;

@end
