@class NSString, NSURL, NSDictionary;

@interface CERecommendationInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recommendationSpecifierTitle;
@property (copy, nonatomic) NSString *recommendationSpecifierSubtitle;
@property (retain, nonatomic) NSURL *serverRecommendationsURL;
@property (retain, nonatomic) NSURL *serverRulesURL;
@property (retain, nonatomic) NSURL *completedRecommendationsURL;
@property (retain, nonatomic) NSDictionary *subtitleTemplates;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
