@class CRRecentContact;

@interface CNRecentComposeRecipient : CNComposeRecipient {
    CRRecentContact *_recent;
}

- (BOOL)isGroup;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)placeholderName;
- (id)recentContact;
- (id)initWithRecentContact:(id)a0;
- (id)preferredSendingAddress;

@end
