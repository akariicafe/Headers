@class NSString, NSDictionary;

@interface IKStyleMediaQuery : NSObject <NSCopying> {
    NSString *_identifier;
}

@property (readonly, nonatomic) BOOL isNegated;
@property (readonly, retain, nonatomic) NSString *mediaType;
@property (readonly, retain, nonatomic) NSDictionary *featureValues;
@property (readonly, nonatomic) NSString *identifier;

+ (id)mediaQueryListWithCSSMediaQuery:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaType:(id)a0 featureValues:(id)a1 isNegated:(BOOL)a2;

@end
