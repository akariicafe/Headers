@class NSArray;

@interface CEDataclassRecommendationAction : CERecommendationAction

@property (retain, nonatomic) NSArray *dataclasses;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 dataclasses:(id)a2;

@end
