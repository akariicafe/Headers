@class NSString, CLLocation;

@interface WFGetDirectionsContextualAction : WFContextualAction

@property (readonly, nonatomic) CLLocation *destination;
@property (readonly, copy, nonatomic) NSString *destinationName;
@property (readonly, nonatomic) unsigned long long navigationType;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDestination:(id)a0 name:(id)a1 type:(unsigned long long)a2;
- (BOOL)showsUserInterfaceWhenRunning;

@end
