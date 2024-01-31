@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDraftManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedDrafts;
@property (retain, nonatomic) NSMutableSet *dirtyDraftIDs;
@property (retain, nonatomic) NSArray *pendingRecipients;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)flushCache;
- (void)_clearDraftForConversation:(id)a0;
- (id)_draftForKey:(id)a0;
- (id)_pendingRecipients;
- (id)_pendingRecipientsURL;
- (void)_setDraft:(id)a0 forKey:(id)a1;
- (void)_setPendingRecipients:(id)a0;
- (void)clearDraftForComposition:(id)a0;
- (void)clearDraftForPendingConversation;
- (id)draftForConversation:(id)a0;
- (id)draftForPendingConversationWithRecipients:(id *)a0;
- (void)saveCompositionAndFlushCache:(BOOL)a0;
- (void)setDraft:(id)a0 forConversation:(id)a1;
- (void)setDraftForPendingConversation:(id)a0 withRecipients:(id)a1;

@end
