@class NSArray, CKContactsSearchManager, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate>

@property (retain, nonatomic) CKContactsSearchManager *contactsSearchManager;
@property (copy, nonatomic) NSArray *conversationCache;
@property (nonatomic) BOOL shouldHideGroupsDonations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_refreshConversationCache;
- (void)chatStateChanged:(id)a0;
- (void)contactsSearchManager:(id)a0 finishedSearchingWithResults:(id)a1;
- (id)conversationCacheForContactsSearchManager:(id)a0;
- (id)shortcutItemForConversation:(id)a0;
- (void)updateShortcutItems;

@end
