@class NSString, NSDictionary;

@interface ICAddToWishListResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSString *message;

- (id)initWithResponseDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
