@class NSString, NSMutableDictionary, NSData, NSDictionary, NSNumber, NSError;

@interface ADJingleRequest : NSObject

@property (retain, nonatomic) NSNumber *token;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSString *bagKey;
@property (retain, nonatomic) NSData *requestBody;
@property (retain, nonatomic) NSMutableDictionary *requestHeaders;
@property (retain) NSData *responseBody;
@property (retain) NSDictionary *responseHeaders;
@property (copy) NSError *error;
@property long long statusCode;
@property (copy, nonatomic) NSString *DSID;

+ (id)incrementToken;

- (void)send;
- (void).cxx_destruct;
- (void)handleJingleResponse;
- (id)init:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendJingleRequest:(id)a0 withCompletion:(id /* block */)a1;

@end
