@interface TSURLRequestFactory : NSObject

+ (id)_jsonBodyWithPostdata:(id)a0;
+ (id)_urlEncodedBodyWithCarrierPostRawData:(id)a0;
+ (id)_urlEncodedBodyWithPostdata:(id)a0;
+ (id)requestWithType:(unsigned long long)a0 URL:(id)a1 postdata:(id)a2;

@end
