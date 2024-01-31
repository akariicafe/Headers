@class NSURL;

@interface PXSharedLibraryShareInvitationActionPerformer : PXActionPerformer {
    NSURL *_invitationURL;
}

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)initWithPresentationEnvironment:(id)a0;
- (void)performActionWithInvitationURL:(id)a0 completionHandler:(id /* block */)a1;

@end
