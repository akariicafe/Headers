@class NSString, NSArray, NSDate;

@interface EDSearchableIndexRichLinkItemMetadatum : NSObject <EDSearchableIndexRichLinkItemMetadatumBuilder>

@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *mailboxIdentifiers;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (retain, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *richLinkID;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;

@end
