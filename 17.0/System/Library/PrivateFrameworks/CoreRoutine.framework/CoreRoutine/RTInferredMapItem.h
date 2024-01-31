@class RTMapItem;

@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTMapItem *mapItem;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned long long source;

+ (id)heaviestMapItemFrom:(id)a0 closestToLocation:(id)a1 distanceCalculator:(id)a2 error:(id *)a3;
+ (double)consolidatedConfidenceFromConfidences:(id)a0;
+ (unsigned long long)consolidatedSourceFromInferredMapItems:(id)a0;
+ (id)dedupeInferredMapItems:(id)a0;
+ (BOOL)hasKnownTypeItem:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithMapItem:(id)a0 confidence:(double)a1 source:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
