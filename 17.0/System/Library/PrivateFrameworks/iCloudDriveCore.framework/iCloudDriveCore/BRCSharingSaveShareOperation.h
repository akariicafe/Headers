@interface BRCSharingSaveShareOperation : BRCSharingModifyShareOperation

- (void)main;
- (id)createActivity;
- (id)initWithShare:(id)a0 zone:(id)a1;
- (void)performAfterUnsharingParentShareTurdIfNecessary:(id /* block */)a0;

@end
