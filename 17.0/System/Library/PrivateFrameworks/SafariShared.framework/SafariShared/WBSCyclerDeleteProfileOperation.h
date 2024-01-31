@class NSString;

@interface WBSCyclerDeleteProfileOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_deleteItemWithIdentifier:(id)a0 inContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
