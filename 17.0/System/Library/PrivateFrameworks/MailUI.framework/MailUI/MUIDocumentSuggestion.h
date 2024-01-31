@class NSURL, NSString, NSDate;

@interface MUIDocumentSuggestion : MUIResultSuggestion

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *subject;

+ (id)suggestionWithFileURL:(id)a0 name:(id)a1 date:(id)a2 subject:(id)a3 authors:(id)a4 authorEmailAddresses:(id)a5 objectID:(id)a6 messageList:(id)a7;

- (id)category;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 name:(id)a1 date:(id)a2 subject:(id)a3 authors:(id)a4 authorEmailAddresses:(id)a5 objectID:(id)a6 messageList:(id)a7;

@end
