@class CNAvatarImageRenderer, PKContactResolver, NSMutableDictionary;
@protocol PKPaymentDataProvider, CNAvatarImageRenderingScope;

@interface PKContactAvatarManager : NSObject {
    PKContactResolver *_contactResolver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockAvatars;
    NSMutableDictionary *_dictionaryAvatars;
    id<PKPaymentDataProvider> _paymentDataProvider;
    CNAvatarImageRenderer *_renderer;
    id<CNAvatarImageRenderingScope> _scope;
}

- (void).cxx_destruct;
- (void)avatarForFamilyMember:(id)a0 peerPaymentAccount:(id)a1 invitation:(id)a2 completion:(id /* block */)a3;
- (void)_avatarForAltDSID:(id)a0 dsid:(id)a1 handles:(id)a2 contact:(id)a3 completion:(id /* block */)a4;
- (void)avatarForFamilyMember:(id)a0 accountUser:(id)a1 invitation:(id)a2 completion:(id /* block */)a3;
- (void)avatarForFamilyMember:(id)a0 completion:(id /* block */)a1;
- (id)cachedAvatarForAltDSID:(id)a0;
- (id)initWithContactResolver:(id)a0 paymentDataProvider:(id)a1;

@end
