@class NSString, PDFDestination, PDFAction, PDFDocument, PDFOutlinePrivate;

@interface PDFOutline : NSObject {
    PDFOutlinePrivate *_private;
}

@property (readonly, weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) PDFOutline *parent;
@property (readonly, nonatomic) unsigned long long numberOfChildren;
@property (readonly, nonatomic) unsigned long long index;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) PDFDestination *destination;
@property (retain, nonatomic) PDFAction *action;

- (void)commonInit;
- (id)init;
- (void)dealloc;
- (void)_setParent:(id)a0;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (id)_next;
- (id)childAtIndex:(unsigned long long)a0;
- (id)_previous;
- (void)removeFromParent;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)_addActionToDictionaryRef:(struct __CFDictionary { } *)a0;
- (BOOL)_childDictionaryReferencesParent:(struct CGPDFDictionary { } *)a0;
- (id)_childArray;
- (id)_firstChild;
- (id)_lastChild;
- (void)_lazilyLoadChildren;
- (int)_openDescendantCount;
- (void)_removeChildAtIndex:(unsigned long long)a0;
- (struct CGPDFDictionary { } *)_srcDictionaryRef;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 parent:(id)a2;
- (void)invalidateDictionaryRef;

@end
