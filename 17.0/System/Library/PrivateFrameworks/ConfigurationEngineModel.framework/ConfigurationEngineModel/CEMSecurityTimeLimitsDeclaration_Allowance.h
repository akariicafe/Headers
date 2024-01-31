@class NSSet, NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadEnabled;
@property (copy, nonatomic) NSNumber *payloadRangeType;
@property (copy, nonatomic) NSString *payloadStart;
@property (copy, nonatomic) NSString *payloadEnd;
@property (copy, nonatomic) NSNumber *payloadSecondsPerDay;

+ (id)buildRequiredOnlyWithEnabled:(id)a0 withRangeType:(id)a1;
+ (id)buildWithEnabled:(id)a0 withRangeType:(id)a1 withStart:(id)a2 withEnd:(id)a3 withSecondsPerDay:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
