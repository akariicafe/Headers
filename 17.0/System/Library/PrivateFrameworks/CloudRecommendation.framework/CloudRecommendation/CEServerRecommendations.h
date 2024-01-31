@class NSArray, CERecommendationPage;

@interface CEServerRecommendations : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recommendations;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) CERecommendationPage *page;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
