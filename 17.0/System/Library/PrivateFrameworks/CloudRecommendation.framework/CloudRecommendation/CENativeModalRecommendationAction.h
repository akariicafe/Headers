@interface CENativeModalRecommendationAction : CERecommendationAction

@property (retain, nonatomic) Class detailControllerClass;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 detailControllerClass:(Class)a2;

@end
