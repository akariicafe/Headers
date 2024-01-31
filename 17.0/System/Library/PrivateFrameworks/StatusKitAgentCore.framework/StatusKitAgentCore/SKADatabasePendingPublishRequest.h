@class NSString, NSData, NSDate;

@interface SKADatabasePendingPublishRequest : NSObject

@property (readonly, copy, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, copy, nonatomic) NSString *statusUniqueIdentifier;
@property (readonly, nonatomic) long long retryCount;

- (void).cxx_destruct;
- (id)initWithCoreDataPendingPublishRequest:(id)a0;
- (id)initWithStatusTypeIdentifier:(id)a0 dateCreated:(id)a1 payloadData:(id)a2 statusUniqueIdentifier:(id)a3 retryCount:(long long)a4;

@end
