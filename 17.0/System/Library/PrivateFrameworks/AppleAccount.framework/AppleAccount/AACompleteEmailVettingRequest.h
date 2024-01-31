@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
    NSString *_token;
}

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0 token:(id)a1;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)initWithURLString:(id)a0 account:(id)a1 token:(id)a2;

@end
