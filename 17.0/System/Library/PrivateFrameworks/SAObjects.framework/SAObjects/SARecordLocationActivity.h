@class NSString, SALocation;

@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *sourceType;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
