@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) BOOL expandEntityReferences;
@property (retain) DOMNode *currentNode;

- (void)dealloc;
- (id)previousNode;
- (id)nextNode;
- (id)previousSibling;
- (id)firstChild;
- (id)lastChild;
- (id)nextSibling;
- (id)parentNode;

@end
