@class NSString, NSURL;

@interface GEOThirdPartyLink : NSObject

@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSURL *url;

+ (id)thirdPartyLinkFromProto:(id)a0;

- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0 url:(id)a1;

@end
