@interface DAMailboxDeleteMessageRequest : DAMailboxRequest

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initRequestWithMessageID:(id)a0;

@end
