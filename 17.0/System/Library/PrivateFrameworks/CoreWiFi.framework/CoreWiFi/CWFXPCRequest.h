@class CWFRequestParameters, NSUUID, NSDictionary, NSDate;

@interface CWFXPCRequest : NSBlockOperation

@property BOOL didSendResponse;
@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long type;
@property (copy, nonatomic) CWFRequestParameters *requestParameters;
@property (copy, nonatomic) NSDate *receivedAt;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) id /* block */ response;
@property (nonatomic) BOOL isSubrequest;

- (BOOL)isExecuting;
- (id)init;
- (BOOL)isFinished;
- (id)description;
- (void).cxx_destruct;

@end
