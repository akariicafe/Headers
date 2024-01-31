@class NSString, PDFActionPrivate;

@interface PDFAction : NSObject <NSCopying> {
    PDFActionPrivate *_private;
}

@property (readonly, nonatomic) NSString *type;

+ (Class)_classForActionDictionary:(struct CGPDFDictionary { } *)a0;
+ (id)actionWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

- (void)setType:(id)a0;
- (void)commonInit;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toolTip;
- (void)_setNextAction:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (void)_setNextActions:(id)a0;
- (void)_setNextActions:(struct CGPDFArray { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)baseURLForDocument:(id)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)nextActions;
- (id)toolTipNoLabel;

@end
