@class NSURL;

@interface CEURLRecommendationAction : CERecommendationAction

@property (retain, nonatomic) NSURL *actionURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 actionType:(id)a1 title:(id)a2 actionURL:(id)a3;

@end
