@interface DOMHTMLCollection : DOMObject

@property (readonly) unsigned int length;

- (void)dealloc;
- (id)item:(unsigned int)a0;
- (id)namedItem:(id)a0;
- (id)tags:(id)a0;

@end
