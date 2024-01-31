@class NSData, NSValue, NSString;

@interface AAPhotoResponse : AAResponse

@property (readonly, nonatomic) NSData *photoData;
@property (readonly, nonatomic) NSValue *cropRect;
@property (readonly, nonatomic) NSString *serverCacheTag;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
