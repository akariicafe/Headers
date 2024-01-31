@class NSString, PKAccount, PKAccountSupportTopic;

@interface PKBusinessChatAccountContext : NSObject <PKBusinessChatContext> {
    PKAccount *_account;
    PKAccountSupportTopic *_topic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (id)bodyText;
- (void).cxx_destruct;
- (id)groupParameters;
- (id)businessIdentifier;
- (id)initWithAccount:(id)a0 topic:(id)a1;
- (id)intentParameters;

@end
