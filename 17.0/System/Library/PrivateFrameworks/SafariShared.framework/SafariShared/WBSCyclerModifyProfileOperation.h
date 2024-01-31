@class NSString;

@interface WBSCyclerModifyProfileOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateIconOfProfile:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateTitleOfProfile:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
