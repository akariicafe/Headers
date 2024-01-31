@class NSPredicate, DNDConfiguration;

@interface CKConversationListFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) CKConversationListFilter *defaultFilter;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *conversationPredicate;
@property (retain, nonatomic) NSPredicate *cachedConversationPredicate;
@property (readonly, nonatomic) unsigned long long inbox;
@property (readonly, nonatomic) BOOL unreadOnly;
@property (readonly, nonatomic) DNDConfiguration *focusConfiguration;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_focusConfigurationSubPredicate;
- (BOOL)_conversation:(id)a0 matchesInbox:(unsigned long long)a1;
- (BOOL)_conversation:(id)a0 matchesSpamFilterInbox:(unsigned long long)a1;
- (BOOL)_conversation:(id)a0 matchesSpamFilterInboxGroup:(unsigned long long)a1;
- (unsigned long long)_defaultSpamFilterInboxForCategory:(long long)a0;
- (id)_inboxSubPredicate;
- (id)_initWithInbox:(unsigned long long)a0 unreadOnly:(BOOL)a1 focusConfiguration:(id)a2;
- (BOOL)_isSpamFilteredConversation:(id)a0;
- (unsigned long long)_spamFilterInboxForCategory:(long long)a0 subCategory:(long long)a1;
- (unsigned long long)_spamFilterInboxForConversation:(id)a0;
- (unsigned long long)_spamFilterInboxForConversationListInbox:(unsigned long long)a0;
- (unsigned long long)_spamFilterInboxGroupForConversationListInbox:(unsigned long long)a0;
- (unsigned long long)_spamFilterInboxGroupForInbox:(unsigned long long)a0;
- (id)_unreadOnlySubPredicate;
- (id)filterByChangingFocusConfiguration:(id)a0;
- (id)filterByChangingInbox:(unsigned long long)a0;
- (id)filterByChangingUnreadOnly:(BOOL)a0;
- (BOOL)isEqualToConversationListFilter:(id)a0;

@end
