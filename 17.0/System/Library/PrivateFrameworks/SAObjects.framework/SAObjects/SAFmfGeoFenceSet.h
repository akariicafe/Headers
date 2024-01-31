@class NSString, SAPerson, NSNumber, SALocation;

@interface SAFmfGeoFenceSet : SADomainCommand

@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *fenceType;
@property (retain, nonatomic) SAPerson *theFriend;
@property (retain, nonatomic) SAPerson *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (copy, nonatomic) NSNumber *oneTimeOnly;
@property (retain, nonatomic) SALocation *requestedLocation;

+ (id)geoFenceSet;
+ (id)geoFenceSetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
