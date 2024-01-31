@class NSString;

@interface WBSCyclerCreateProfileOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_createRandomProfileWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
