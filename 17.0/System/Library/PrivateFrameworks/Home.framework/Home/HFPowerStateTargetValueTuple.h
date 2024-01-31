@class NSString, NAIdentity, NSNumber;

@interface HFPowerStateTargetValueTuple : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) NSNumber *onTargetValue;
@property (readonly, nonatomic) NSNumber *offTargetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fanStateTargetValueTuple;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCharacteristicType:(id)a0 onTargetValue:(id)a1 offTargetValue:(id)a2;
- (long long)primaryStateForTargetValue:(id)a0;
- (id)targetValueForPrimaryState:(long long)a0;

@end
