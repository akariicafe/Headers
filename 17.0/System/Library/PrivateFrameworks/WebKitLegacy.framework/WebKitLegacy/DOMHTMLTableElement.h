@class DOMHTMLTableSectionElement, NSString, DOMHTMLCollection, DOMHTMLTableCaptionElement;

@interface DOMHTMLTableElement : DOMHTMLElement

@property (retain) DOMHTMLTableCaptionElement *caption;
@property (retain) DOMHTMLTableSectionElement *tHead;
@property (retain) DOMHTMLTableSectionElement *tFoot;
@property (readonly) DOMHTMLCollection *rows;
@property (readonly) DOMHTMLCollection *tBodies;
@property (copy) NSString *align;
@property (copy) NSString *bgColor;
@property (copy) NSString *border;
@property (copy) NSString *cellPadding;
@property (copy) NSString *cellSpacing;
@property (copy) NSString *frameBorders;
@property (copy) NSString *rules;
@property (copy) NSString *summary;
@property (copy) NSString *width;

- (id)createCaption;
- (id)createTBody;
- (id)createTFoot;
- (id)createTHead;
- (void)deleteCaption;
- (void)deleteRow:(int)a0;
- (void)deleteTFoot;
- (void)deleteTHead;
- (id)insertRow:(int)a0;
- (int)structuralComplexityContribution;

@end
