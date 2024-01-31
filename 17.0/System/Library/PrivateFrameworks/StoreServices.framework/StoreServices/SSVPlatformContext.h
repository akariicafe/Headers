@class NSDictionary, NSString, NSArray;
@protocol SSVSAPContext;

@interface SSVPlatformContext : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *bagDictionary;
@property (readonly, nonatomic) NSString *lookupURLString;
@property (readonly, nonatomic) NSString *unpersonalizedLookupURLString;
@property (readonly, nonatomic) NSArray *signedHeaders;
@property (readonly, nonatomic) NSArray *signedQueryParameters;
@property (retain, nonatomic) id<SSVSAPContext> SAPContext;

- (void).cxx_destruct;
- (id)initWithBagDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLookupURL:(id)a0 unpersonalizedLookupURL:(id)a1 signedHeaders:(id)a2 signedQueryParameters:(id)a3;

@end
