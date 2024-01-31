@class NSString, NSMutableData;

@interface POWSTrustRequest : NSObject

@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *endpointURN;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *to;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableData *password;

- (void).cxx_destruct;

@end
