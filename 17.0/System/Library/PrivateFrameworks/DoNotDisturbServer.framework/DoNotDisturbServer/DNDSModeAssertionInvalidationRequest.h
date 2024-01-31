@class NSString, NSUUID, DNDSModeAssertionInvalidationPredicate, NSDate, DNDModeAssertionSource, DNDModeAssertionInvalidationDetails;

@interface DNDSModeAssertionInvalidationRequest : NSObject <DNDSModernAssertionSourceResolution, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) DNDSModeAssertionInvalidationPredicate *predicate;
@property (readonly, copy, nonatomic) NSDate *requestDate;
@property (readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details;
@property (readonly, copy, nonatomic) DNDModeAssertionSource *source;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long reasonOverride;

+ (id)requestWithPredicate:(id)a0 requestDate:(id)a1 details:(id)a2 source:(id)a3 reason:(unsigned long long)a4 reasonOverride:(unsigned long long)a5;
+ (id)requestWithPredicate:(id)a0 requestDate:(id)a1 source:(id)a2 reason:(unsigned long long)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 predicate:(id)a1 requestDate:(id)a2 details:(id)a3 source:(id)a4 reason:(unsigned long long)a5 reasonOverride:(unsigned long long)a6;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)a0 localDeviceIdentifier:(id)a1 remoteDeviceIdentifier:(id)a2;

@end
