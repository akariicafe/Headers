@class NSData, NSHTTPURLResponse;

@interface C2NetworkingResponse : NSObject

@property (readonly, copy, nonatomic) NSHTTPURLResponse *urlResponse;
@property (readonly, copy, nonatomic) NSData *body;

+ (id)responseFromRequest:(id)a0 statusCode:(long long)a1 headerFields:(id)a2 body:(id)a3;
+ (id)responseWithURLResponse:(id)a0 body:(id)a1;

- (void).cxx_destruct;

@end
