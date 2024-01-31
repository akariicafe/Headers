@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) BOOL expandEntityReferences;
@property (readonly) DOMNode *referenceNode;
@property (readonly) BOOL pointerBeforeReferenceNode;

- (void)dealloc;
- (void)detach;
- (id)previousNode;
- (id)nextNode;

@end
