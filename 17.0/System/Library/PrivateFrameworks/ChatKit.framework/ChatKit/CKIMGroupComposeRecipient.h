@class NSString, NSArray, NSDate, CKIMComposeRecipient;

@interface CKIMGroupComposeRecipient : CNComposeRecipientGroup <CKIMComposeRecipient>

@property (retain, nonatomic) NSString *conversationGUID;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *detailsString;
@property (retain, nonatomic) NSDate *lastMessageDate;
@property (retain, nonatomic) CKIMComposeRecipient *matchingRecipient;
@property (readonly, nonatomic) NSArray *composeRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)composeRecipientWithConversation:(id)a0 searchTerm:(id)a1 matchingRecipient:(id)a2;

- (id)address;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)compositeName;
- (id)initWithGUID:(id)a0 displayString:(id)a1 detailsString:(id)a2 handles:(id)a3 lastMessageDate:(id)a4 searchTerm:(id)a5 matchingRecipient:(id)a6;
- (BOOL)isRemovableFromSearchResults;
- (void)releaseIMReferences;

@end
