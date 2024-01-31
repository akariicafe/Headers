@class NSArray, NSString, NSDictionary;

@interface BMPersonEntity : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSString *customId;
@property (readonly, nonatomic) NSString *contactId;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *socialMediaHandles;
@property (readonly, nonatomic) NSDictionary *attributes;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNames:(id)a0 customId:(id)a1 contactId:(id)a2 emailAddresses:(id)a3 addresses:(id)a4 phoneNumbers:(id)a5 socialMediaHandles:(id)a6 attributes:(id)a7;

@end
