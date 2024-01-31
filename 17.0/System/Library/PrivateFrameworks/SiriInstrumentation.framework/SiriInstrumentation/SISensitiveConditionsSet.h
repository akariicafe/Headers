@interface SISensitiveConditionsSet : NSObject <NSCopying> {
    unsigned long long _bitmask;
}

+ (id)fromDeviceSensitivityState:(int)a0;

- (id)init;
- (unsigned long long)hash;
- (void)addCondition:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeConditions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)addDeviceSensitivityState:(int)a0;
- (BOOL)isConditionSet:(int)a0;
- (BOOL)intersectsWith:(id)a0;
- (id)differenceSetFrom:(id)a0;
- (id)initWithBitMask:(unsigned long long)a0;
- (id)intersectionSetWith:(id)a0;
- (BOOL)isDeviceSensitivityStateSet:(int)a0;
- (BOOL)isEqualToConditionsSet:(id)a0;
- (void)removeDeviceSensitivityState:(int)a0;
- (id)unionSetWith:(id)a0;

@end
