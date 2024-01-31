@class TSDShadow, NSString, TSDReflection, TSSStyle, TSDStroke;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (retain, nonatomic) TSSStyle *style;
@property (copy, nonatomic) TSDReflection *reflection;
@property (copy, nonatomic) TSDShadow *shadow;
@property (copy, nonatomic) TSDStroke *stroke;
@property (nonatomic) float opacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForProperty:(int)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)boxedValueForProperty:(int)a0;
- (void)i_setValue:(id)a0 forProperty:(int)a1;
- (id)propertyMapForNewPreset;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)setBoxedValue:(id)a0 forProperty:(int)a1;
- (void)setValuesForProperties:(id)a0;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylesForCopyStyle;

@end
