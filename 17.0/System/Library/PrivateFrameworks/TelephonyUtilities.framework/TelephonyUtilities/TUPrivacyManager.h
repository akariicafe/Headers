@class NSArray;

@interface TUPrivacyManager : NSObject

@property (class, readonly, nonatomic) TUPrivacyManager *sharedPrivacyManager;

@property (readonly, copy, nonatomic) NSArray *privacyRules;

- (void)setBlockIncomingCommunication:(BOOL)a0 forEmailAddress:(id)a1;
- (id)init;
- (BOOL)isIncomingCommunicationBlockedForHandle:(id)a0;
- (void)dealloc;
- (id)allBlacklistRules;
- (void)setBlockIncomingCommunication:(BOOL)a0 forBusinessID:(id)a1;
- (void)setBlockIncomingCommunication:(BOOL)a0 forPhoneNumber:(id)a1;
- (void)_handleBlockListChanged:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)a0;
- (void)addRule:(id)a0;
- (void)removeRule:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForBusinessID:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)a0;

@end
