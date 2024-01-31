@class NSNumber, NAIdentity, NSString;

@interface HFRelativePercentValue : NSObject <NSCopying, NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCharacteristicReadResponse:(id)a0;
- (id)initWithValue:(id)a0 forCharacteristic:(id)a1;

@end
