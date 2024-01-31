@class NSString;

@interface WBSCyclerModifyTabOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_modifyRandomTabGroupWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_modifyRandomTabInTabGroup:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateTitleOfTab:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateURLOfTab:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
