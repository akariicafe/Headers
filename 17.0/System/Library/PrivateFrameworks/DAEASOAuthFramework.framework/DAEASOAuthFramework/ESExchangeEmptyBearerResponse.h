@class NSString, NSError;

@interface ESExchangeEmptyBearerResponse : NSObject

@property (readonly, nonatomic) NSString *authURI;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
