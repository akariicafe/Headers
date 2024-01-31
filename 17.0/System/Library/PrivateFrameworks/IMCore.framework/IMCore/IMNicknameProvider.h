@class IMNicknameProvider_Impl;

@interface IMNicknameProvider : NSObject {
    IMNicknameProvider_Impl *_swiftImpl;
}

- (id)init;
- (void)sendNameOnlyToHandleIDs:(id)a0 fromHandleID:(id)a1;
- (void).cxx_destruct;
- (void)setPersonalNicknameWithContact:(id)a0;
- (void)markTransitionAsObservedForHandleID:(id)a0 isAutoUpdate:(BOOL)a1;
- (id)allNicknamesForContact:(id)a0;
- (void)bannerActionTapped:(id)a0 IMNicknameBannerAction:(unsigned long long)a1;
- (id)currentNicknameForContact:(id)a0;
- (id)nicknameForContact:(id)a0;
- (void)nicknameForCurrentUserWithCompletionHandler:(id /* block */)a0;
- (void)setNicknameListener:(id)a0;
- (id)nicknameForHandleID:(id)a0;
- (void)sendPersonalNicknameToHandleID:(id)a0;
- (BOOL)hasObservedTransitionForHandleID:(id)a0;
- (id)pendingNicknameForContact:(id)a0;
- (void)sendPersonalNicknameToHandleID:(id)a0 fromHandleID:(id)a1;
- (void)updatePendingNicknameWithContact:(id)a0;

@end
