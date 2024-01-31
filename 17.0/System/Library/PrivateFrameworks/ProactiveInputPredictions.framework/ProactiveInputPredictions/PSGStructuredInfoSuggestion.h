@class PSGOperationalPredictedItem, PSGProactiveTrigger, PPQuickTypeItem;

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSGProactiveTrigger *proactiveTrigger;
@property (readonly, nonatomic) PPQuickTypeItem *portraitItem;
@property (readonly, nonatomic) PSGOperationalPredictedItem *operationalItem;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isApplePay;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predictedValue;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithProactiveTrigger:(id)a0 portraitItem:(id)a1 operationalItem:(id)a2;

@end
