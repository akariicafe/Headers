@class PDFActionGoToPrivateVars, PDFDestination;

@interface PDFActionGoTo : PDFAction <NSCopying> {
    PDFActionGoToPrivateVars *_private2;
}

@property (retain, nonatomic) PDFDestination *destination;

- (void)commonInit;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDestination:(id)a0;
- (id)toolTip;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)toolTipNoLabel;

@end
