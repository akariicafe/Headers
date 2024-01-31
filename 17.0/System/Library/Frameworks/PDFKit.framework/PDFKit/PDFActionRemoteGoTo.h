@class NSURL, PDFActionRemoteGoToPrivateVars;

@interface PDFActionRemoteGoTo : PDFAction <NSCopying> {
    PDFActionRemoteGoToPrivateVars *_private2;
}

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) struct CGPoint { double x0; double x1; } point;
@property (copy, nonatomic) NSURL *URL;

- (void)commonInit;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toolTip;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)initWithPageIndex:(unsigned long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 fileURL:(id)a2;
- (id)toolTipNoLabel;

@end
