@class NSNumber, NSDate;

@interface HMDNaturalLightingActiveTransitionContext : HMFObject <NSCopying>

@property (readonly, copy) NSDate *startDate;
@property (readonly) unsigned long long millisecondsElapsedSinceStartDate;
@property (readonly, copy) NSNumber *transitionChecksum;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartDate:(id)a0 millisecondsElapsedSinceStartDate:(unsigned long long)a1 transitionChecksum:(id)a2;

@end
