@class DOMNode, NSString;

@interface DOMMutationEvent : DOMEvent

@property (readonly) DOMNode *relatedNode;
@property (readonly, copy) NSString *prevValue;
@property (readonly, copy) NSString *newValue;
@property (readonly, copy) NSString *attrName;
@property (readonly) unsigned short attrChange;

- (void)initMutationEvent:(id)a0 :(BOOL)a1 :(BOOL)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(unsigned short)a7;
- (void)initMutationEvent:(id)a0 canBubble:(BOOL)a1 cancelable:(BOOL)a2 relatedNode:(id)a3 prevValue:(id)a4 newValue:(id)a5 attrName:(id)a6 attrChange:(unsigned short)a7;

@end
