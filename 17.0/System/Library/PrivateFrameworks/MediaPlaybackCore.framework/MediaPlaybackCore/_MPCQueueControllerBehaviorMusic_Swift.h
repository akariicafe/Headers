@class NSString, MPIdentifierSet, NSError, MPPlaybackContext;
@protocol MPMutableIdentifierListSection;

@interface _MPCQueueControllerBehaviorMusic_Swift : NSObject <MPShuffleableSectionedIdentifierListDataSource> {
    void /* unknown type, empty encoding */ behavior;
    void /* unknown type, empty encoding */ pendingPodDescriptors;
    void /* unknown type, empty encoding */ queueLoader;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBehavior:(id)a0;
- (void)reloadSection:(id<MPMutableIdentifierListSection>)a0 completion:(void (^)(NSError *))a1;
- (BOOL)isValidSection:(id)a0;
- (BOOL)shouldUsePlaceholderForSection:(id)a0;
- (void)_addInitialPlaybackContext:(MPPlaybackContext *)a0 completion:(void (^)(NSError *))a1;
- (id)_hashedDSIDForAutoPlay;
- (void)_insertPlaybackContext:(MPPlaybackContext *)a0 intoAutoPlayIdentifierList:(BOOL)a1 atPosition:(long long)a2 afterContentItemID:(NSString *)a3 completion:(void (^)(NSError *))a4;
- (BOOL)canJumpToSection:(id)a0 item:(id)a1;
- (BOOL)canNextTrackFromSection:(id)a0 item:(id)a1;
- (BOOL)canPreviousTrackFromSection:(id)a0 item:(id)a1;
- (void)firstContentItemIDForIdentifiers:(MPIdentifierSet *)a0 completion:(void (^)(NSString *, NSError *))a1;
- (BOOL)isLoadingAdditionalItemsForSection:(id)a0;
- (BOOL)isRadioContainerForSection:(id)a0;
- (id)peekMetadataObjectForSection:(id)a0;
- (id)peekMetadataObjectForSection:(id)a0 item:(id)a1;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (BOOL)shouldUsePlaceholderForSection:(id)a0 item:(id)a1;

@end
