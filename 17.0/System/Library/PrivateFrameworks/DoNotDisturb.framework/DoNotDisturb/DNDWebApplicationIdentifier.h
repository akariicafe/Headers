@class NSString;

@interface DNDWebApplicationIdentifier : NSObject <DNDDiffBuilding, DNDEventSourceIdentifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *webIdentifier;
@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long platform;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)diffDescription;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (id)initWithWebIdentifier:(id)a0 givenName:(id)a1;

@end
