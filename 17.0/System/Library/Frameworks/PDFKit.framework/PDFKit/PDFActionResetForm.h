@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying> {
    PDFActionResetFormPrivateVars *_private2;
}

@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) BOOL fieldsIncludedAreCleared;

- (void)commonInit;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toolTip;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

@end
