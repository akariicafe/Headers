@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, copy, nonatomic) NSSet *terminalCriteria;

- (void)encodeWithCoder:(id)a0;
- (id)vehicleInitiatedPairingLaunchURLWithReferralSource:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
