@class NSString;

@interface _MSPContainerEdit : NSObject <MSPContainerEdit>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ifAddition:(id /* block */)a0 ifRemoval:(id /* block */)a1 ifReplacement:(id /* block */)a2 ifContentUpdate:(id /* block */)a3 ifReplacedEntirely:(id /* block */)a4;
- (void)useImmutableObjectsFromMap:(id)a0 intermediateMutableObjectTransferBlock:(id /* block */)a1;

@end
