@class NSArray, EMMessageObjectID, EMMessageList;

@interface MUIResultSuggestion : MUISearchSuggestion

@property (readonly, nonatomic) NSArray *authors;
@property (readonly, nonatomic) NSArray *authorEmailAddresses;
@property (readonly, nonatomic) EMMessageList *messageList;
@property (readonly, nonatomic) EMMessageObjectID *objectID;

- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 messageList:(id)a1 authors:(id)a2 authorEmailAddresses:(id)a3;

@end
