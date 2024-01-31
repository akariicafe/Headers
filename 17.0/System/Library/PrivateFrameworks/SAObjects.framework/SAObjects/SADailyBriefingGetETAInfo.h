@interface SADailyBriefingGetETAInfo : SABaseClientBoundCommand

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
