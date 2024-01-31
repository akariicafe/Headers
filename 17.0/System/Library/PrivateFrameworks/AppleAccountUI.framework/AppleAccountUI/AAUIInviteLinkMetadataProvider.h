@class AAMessagesInviteContext;

@interface AAUIInviteLinkMetadataProvider : NSObject {
    AAMessagesInviteContext *_context;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)_defaultBackgroundImage;
- (id)_lpImageWithImage:(id)a0;
- (void)loadMetadataWithImage:(id)a0 completion:(id /* block */)a1;

@end
