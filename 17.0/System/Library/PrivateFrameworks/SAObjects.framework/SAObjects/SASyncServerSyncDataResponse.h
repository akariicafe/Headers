@class NSString, NSArray;

@interface SASyncServerSyncDataResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;
@property (nonatomic) long long batchNumber;
@property (copy, nonatomic) NSArray *dataBatch;
@property (nonatomic) BOOL lastBatch;
@property (copy, nonatomic) NSString *responseCode;
@property (copy, nonatomic) NSString *serverGeneration;
@property (copy, nonatomic) NSString *syncType;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
