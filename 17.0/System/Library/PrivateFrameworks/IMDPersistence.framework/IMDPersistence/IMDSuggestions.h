@protocol SGSuggestionsServiceMessagesProtocol, NSObject;

@interface IMDSuggestions : NSObject <SGMessagesSuggestionsServiceDelegate>

@property (retain) id<NSObject, SGSuggestionsServiceMessagesProtocol> sgService;

- (id)init;
- (void)suggestionsFromMessage:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)suggestionsService:(id)a0 needsContextForConversationIdentifier:(id)a1 numberOfMessagesNeeded:(unsigned long long)a2;

@end
