@class NSString;
@protocol IMAssistantMessageAttributeSanitizer;

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling>

@property (retain, nonatomic) id<IMAssistantMessageAttributeSanitizer> attributeSanitizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleSearchForMessages:(id)a0 completion:(id /* block */)a1;
- (void)resolveAttributesForSearchForMessages:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveRecipientsForSearchForMessages:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveSendersForSearchForMessages:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveSpeakableGroupNamesForSearchForMessages:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithAttributeSanitizer:(id)a0 intentIdentifier:(id)a1;
- (id)initWithDataSource:(id)a0 attributeSanitizer:(id)a1 intentIdentifier:(id)a2;
- (id)initWithDataSource:(id)a0 intentIdentifier:(id)a1;
- (id)initWithIntentIdentifier:(id)a0;
- (void)resolveRecipientsAndSender:(id)a0 withCompletion:(id /* block */)a1;
- (id)resolveSpeakableGroupNames:(id)a0 forIntent:(id)a1;

@end
