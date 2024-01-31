@class NSString, DOMHTMLFormElement, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement

@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property BOOL multiple;
@property (copy) NSString *name;
@property int size;
@property (readonly, copy) NSString *type;
@property (readonly) DOMHTMLOptionsCollection *options;
@property (readonly) int length;
@property int selectedIndex;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;

- (void)remove:(int)a0;
- (void)_activateItemAtIndex:(int)a0;
- (void)_activateItemAtIndex:(int)a0 allowMultipleSelection:(BOOL)a1;
- (unsigned int)completeLength;
- (id)item:(unsigned int)a0;
- (id)listItemAtIndex:(int)a0;
- (void)add:(id)a0 :(id)a1;
- (void)add:(id)a0 before:(id)a1;
- (id)namedItem:(id)a0;
- (int)structuralComplexityContribution;

@end
