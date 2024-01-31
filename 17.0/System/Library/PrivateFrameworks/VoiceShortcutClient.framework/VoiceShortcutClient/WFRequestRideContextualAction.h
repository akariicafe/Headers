@class NSString, CLLocation;

@interface WFRequestRideContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) CLLocation *destination;
@property (readonly, copy, nonatomic) NSString *destinationName;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0 destination:(id)a1 name:(id)a2;
- (BOOL)showsUserInterfaceWhenRunning;

@end
