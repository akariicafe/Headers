@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {
    PDFFormFieldPrivateVars *_private;
}

- (long long)buttonType;
- (id)stringValue;
- (id)document;
- (void)commonInit;
- (void)dealloc;
- (void)setStringValue:(id)a0;
- (id)fieldName;
- (id)defaultStringValue;
- (id)description;
- (void)setDocument:(id)a0;
- (void)setButtonType:(long long)a0;
- (void).cxx_destruct;
- (void)setFieldName:(id)a0;
- (int)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFieldType:(int)a0;
- (id)initWithAnnotation:(id)a0;
- (struct __CFDictionary { } *)dictionaryRef;
- (BOOL)_isRedacted;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)clearDictionaryRef;
- (void)commonCreateDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithFormDictionary:(struct CGPDFDictionary { } *)a0;
- (void)setDefaultStringValue:(id)a0;
- (void)setWriteDefaultValue:(BOOL)a0;
- (BOOL)writeDefaultValue;

@end
