@class IMNickname;

@interface IMNicknameProvider_Impl : NSObject {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ daemonConnection;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)markTransitionAsObservedForHandleID:(id)a0 isAutoUpdate:(BOOL)a1;
- (id)allNicknamesForContact:(id)a0;
- (id)currentNicknameForContact:(id)a0;
- (id)nicknameForContact:(id)a0;
- (void)nicknameForCurrentUserWithCompletionHandler:(void (^)(IMNickname *))a0;
- (void)setNicknameListener:(id)a0;
- (id)nicknameForHandleID:(id)a0;
- (void)bannerActionTappedFrom:(id)a0 on:(unsigned long long)a1;
- (BOOL)hasObservedTransitionForHandleID:(id)a0;
- (void)nicknamesDidChangeWithNotification:(id)a0;
- (id)pendingNicknameForContact:(id)a0;
- (void)sendNameOnlyTo:(id)a0 from:(id)a1;
- (void)sendPersonalNicknameTo:(id)a0;
- (void)sendPersonalNicknameTo:(id)a0 from:(id)a1;
- (void)setPersonalNicknameWith:(id)a0;
- (void)updatePendingNicknameWith:(id)a0;

@end
