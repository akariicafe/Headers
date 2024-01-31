@interface MUPDFAnnotationAdaptorHelper : NSObject

+ (void)addAKAnnotation:(id)a0 toAnnotationDictionary:(struct __CFDictionary { } *)a1;
+ (double)_pointSizeFromAppearanceTokens:(id)a0;
+ (id)_colorFromAppearanceTokens:(id)a0;
+ (id)_colorFromPDFArray:(struct CGPDFArray { } *)a0;
+ (id)_fontNameFromAppearanceTokens:(id)a0;
+ (id)_getColorFromAppearanceString:(struct CGPDFString { } *)a0;
+ (id)_getFontFromAppearanceString:(struct CGPDFString { } *)a0 ofPDFPage:(struct CGPDFPage { } *)a1;
+ (BOOL)_shouldUseAKAnnotation:(id)a0 toRepresentCGPDFAnnotation:(struct CGPDFAnnotation { } *)a1;
+ (id)_tokenizeAppearanceString:(id)a0;
+ (void)addAppearanceStreamOfAnnotation:(id)a0 forPage:(struct CGPDFPage { } *)a1 toDictionary:(id)a2;
+ (void)addBorderStyleOfAnnotation:(id)a0 toDictionary:(id)a1;
+ (void)addBoundsOfAnnotation:(id)a0 forPage:(struct CGPDFPage { } *)a1 toDictionary:(id)a2;
+ (void)addContentsStringOfAnnotation:(id)a0 toDictionary:(id)a1;
+ (void)addDefaultAppearanceStreamOfAnnotation:(id)a0 toDictionary:(id)a1;
+ (void)addFlagsOfAnnotation:(id)a0 toDictionary:(id)a1;
+ (void)addModificationDateOfAnnotation:(id)a0 toDictionary:(id)a1;
+ (void)addQuaddingOfAnnotation:(id)a0 toDictionary:(id)a1;
+ (void)addRGBColor:(id)a0 forKey:(id)a1 toDictionary:(id)a2;
+ (void)addString:(id)a0 toDictionary:(id)a1 forKey:(id)a2;
+ (void)addTextLabelOfAnnotation:(id)a0 toDictionary:(id)a1;
+ (void)addTextOfAnnotation:(id)a0 toDictionary:(id)a1 forKey:(id)a2 canUsePlaceholder:(BOOL)a3;
+ (id)getFullFieldNameFromAnnotationDictionary:(struct CGPDFDictionary { } *)a0;
+ (id)getRGBColorForKey:(const char *)a0 fromAnnotationDictionary:(struct CGPDFDictionary { } *)a1;
+ (id)getTextStringForKey:(const char *)a0 fromAnnotationDictionary:(struct CGPDFDictionary { } *)a1;
+ (void)migrateAKFilledAnnotationPropertiesTo:(id)a0 fromAnnotationDictionary:(struct CGPDFDictionary { } *)a1 ofPDFPage:(struct CGPDFPage { } *)a2;
+ (void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)a0 fromAnnotationDictionary:(struct CGPDFDictionary { } *)a1 ofPDFPage:(struct CGPDFPage { } *)a2;
+ (void)migrateAKStrokedAnnotationPropertiesTo:(id)a0 fromAnnotationDictionary:(struct CGPDFDictionary { } *)a1 ofPDFPage:(struct CGPDFPage { } *)a2;
+ (void)migrateAKTextAnnotationPropertiesTo:(id)a0 fromAnnotationDictionary:(struct CGPDFDictionary { } *)a1 ofPDFPage:(struct CGPDFPage { } *)a2;
+ (void)migrateAppearanceStreamFromCGPDFAnnotationDict:(struct CGPDFDictionary { } *)a0 toAKAnnotation:(id)a1 compensatingForPageRotation:(unsigned long long)a2;
+ (id)newAKAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0;
+ (void)readDefaultAppearanceStringFromPDFDictionary:(struct CGPDFDictionary { } *)a0 ofPage:(struct CGPDFPage { } *)a1 toDictionary:(id)a2;
+ (void)readQuaddingFromPDFDictionary:(struct CGPDFDictionary { } *)a0 toDictionary:(id)a1;

@end
