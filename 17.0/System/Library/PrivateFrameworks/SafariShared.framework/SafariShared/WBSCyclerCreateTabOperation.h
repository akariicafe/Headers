@class NSString;

@interface WBSCyclerCreateTabOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_createRandomTabGroupWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createRandomTabWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
