@class PDFFormPrivateVars;

@interface PDFForm : NSObject <NSCopying> {
    PDFFormPrivateVars *_private;
}

- (id)document;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (id)fieldNames;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonResetForm:(id)a0 inclusive:(BOOL)a1;
- (void)addFormField:(id)a0;
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (struct CGPDFString { } *)defaultDAStringRef;
- (id)defaultStringValueForFieldNamed:(id)a0;
- (id)fieldNamed:(id)a0;
- (void)removeFormFieldWithFieldName:(id)a0;
- (void)resetFormExcludingFields:(id)a0;
- (void)resetFormForFields:(id)a0;
- (void)setStringValue:(id)a0 forFieldNamed:(id)a1 postFormChangeNotification:(BOOL)a2;
- (id)stringValueForFieldNamed:(id)a0;

@end
