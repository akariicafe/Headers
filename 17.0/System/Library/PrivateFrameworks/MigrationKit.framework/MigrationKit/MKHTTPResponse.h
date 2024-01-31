@class NSData, MKHTTPHeaders;

@interface MKHTTPResponse : NSObject

@property (retain, nonatomic) MKHTTPHeaders *headers;
@property (retain, nonatomic) NSData *body;

- (id)init;
- (id)responseData;
- (void).cxx_destruct;

@end
