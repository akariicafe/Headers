@class SBFolderController, NSIndexSet, NSString;

@interface _SBFolderControllerIconImageViewControllerKeepSnapshotAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (readonly, weak, nonatomic) SBFolderController *folderController;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSIndexSet *pageIndexesToExclude;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long snapshotType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithFolderController:(id)a0 snapshotType:(unsigned long long)a1 pageIndexesToExclude:(id)a2 reason:(id)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
