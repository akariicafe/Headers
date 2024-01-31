@class NSURL, NSString;

@interface MUILinkSuggestion : MUIResultSuggestion

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *richLinkID;
@property (readonly, nonatomic) NSString *messageID;

+ (id)suggestionWithURL:(id)a0 title:(id)a1 richLinkID:(id)a2 authors:(id)a3 authorEmailAddresses:(id)a4 objectID:(id)a5 messageID:(id)a6 messageList:(id)a7;

- (id)category;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 title:(id)a1 richLinkID:(id)a2 authors:(id)a3 authorEmailAddresses:(id)a4 objectID:(id)a5 messageID:(id)a6 messageList:(id)a7;

@end
