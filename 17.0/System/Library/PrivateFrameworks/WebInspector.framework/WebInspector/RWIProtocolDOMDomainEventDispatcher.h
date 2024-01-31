@interface RWIProtocolDOMDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)documentUpdated;
- (void)attributeModifiedWithNodeId:(int)a0 name:(id)a1 value:(id)a2;
- (void)attributeRemovedWithNodeId:(int)a0 name:(id)a1;
- (void)characterDataModifiedWithNodeId:(int)a0 characterData:(id)a1;
- (void)childNodeCountUpdatedWithNodeId:(int)a0 childNodeCount:(int)a1;
- (void)childNodeInsertedWithParentNodeId:(int)a0 previousNodeId:(int)a1 node:(id)a2;
- (void)childNodeRemovedWithParentNodeId:(int)a0 nodeId:(int)a1;
- (void)customElementStateChangedWithNodeId:(int)a0 customElementState:(long long)a1;
- (void)didAddEventListenerWithNodeId:(int)a0;
- (void)didFireEventWithNodeId:(int)a0 eventName:(id)a1 timestamp:(double)a2 data:(id *)a3;
- (void)inlineStyleInvalidatedWithNodeIds:(id)a0;
- (void)inspectWithNodeId:(int)a0;
- (void)powerEfficientPlaybackStateChangedWithNodeId:(int)a0 timestamp:(double)a1 isPowerEfficient:(BOOL)a2;
- (void)pseudoElementAddedWithParentId:(int)a0 pseudoElement:(id)a1;
- (void)pseudoElementRemovedWithParentId:(int)a0 pseudoElementId:(int)a1;
- (void)setChildNodesWithParentId:(int)a0 nodes:(id)a1;
- (void)shadowRootPoppedWithHostId:(int)a0 rootId:(int)a1;
- (void)shadowRootPushedWithHostId:(int)a0 root:(id)a1;
- (void)willDestroyDOMNodeWithNodeId:(int)a0;
- (void)willRemoveEventListenerWithNodeId:(int)a0;

@end
