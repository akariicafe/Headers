@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id predictedItem;
@property (readonly, nonatomic) float score;

+ (id)predictionsFrom:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)a0 score:(float)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setScore:(float)a0;
- (id)description;
- (BOOL)isEqualToScoredPredictionItem:(id)a0;
- (id)initWithPredictedItem:(id)a0 score:(float)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
