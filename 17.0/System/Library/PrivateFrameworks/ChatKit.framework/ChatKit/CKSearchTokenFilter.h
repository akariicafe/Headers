@class NSString, NSArray, CKConversation;

@interface CKSearchTokenFilter : NSObject

@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long filterOptions;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) NSArray *tokenAddresses;
@property (retain, nonatomic) NSString *queryStringForConversationSearch;
@property (retain, nonatomic) NSString *queryStringForMessageTypeSearch;
@property (weak, nonatomic) CKConversation *conversation;

- (void).cxx_destruct;
- (id)_conditionalForHandles:(id)a0 usingKey:(id)a1;
- (BOOL)hasFilterOption:(unsigned long long)a0;
- (id)initWithContentType:(unsigned long long)a0 filterOptions:(unsigned long long)a1 itemIdentifier:(id)a2 tokenAddresses:(id)a3;
- (id)initWithContentType:(unsigned long long)a0 itemIdentifier:(id)a1;

@end
