@class NSMutableDictionary, NSString, NSData, IDSOpportunisticOptions;

@interface IDSOpportunisticData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *sendCount;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountUniqueID;
@property (retain, nonatomic) IDSOpportunisticOptions *options;

- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (BOOL)isInvalid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)incrementSendCountForDestination:(id)a0;
- (id)initWithData:(id)a0 identifier:(id)a1 serviceName:(id)a2 accountUniqueID:(id)a3 options:(id)a4;
- (id)initWithData:(id)a0 identifier:(id)a1 serviceName:(id)a2 accountUniqueID:(id)a3 options:(id)a4 sendCount:(id)a5;
- (void)markInvalid;
- (long long)sendCountForURI:(id)a0;
- (BOOL)shouldSendToDestination:(id)a0;

@end
