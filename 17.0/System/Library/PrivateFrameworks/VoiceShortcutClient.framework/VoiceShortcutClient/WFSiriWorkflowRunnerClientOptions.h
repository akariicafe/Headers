@class NSArray, NSString;

@interface WFSiriWorkflowRunnerClientOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
@property (readonly, nonatomic) long long executionContext;
@property (readonly, copy, nonatomic) NSString *originatingDeviceIDSIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingDeviceRapportEffectiveIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingDeviceRapportMediaSystemIdentifier;
@property (readonly, nonatomic) BOOL isOwnedByCurrentUser;
@property (nonatomic) long long currentDeviceIdiom;
@property (readonly, nonatomic) BOOL disableSiriBehavior;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAirPlayRouteIDs:(id)a0 executionContext:(long long)a1 originatingDeviceIDSIdentifier:(id)a2 originatingDeviceRapportEffectiveIdentifier:(id)a3 originatingDeviceRapportMediaSystemIdentifier:(id)a4 isOwnedByCurrentUser:(BOOL)a5;
- (id)initWithAirPlayRouteIDs:(id)a0 executionContext:(long long)a1 originatingDeviceIDSIdentifier:(id)a2 originatingDeviceRapportEffectiveIdentifier:(id)a3 originatingDeviceRapportMediaSystemIdentifier:(id)a4 isOwnedByCurrentUser:(BOOL)a5 disableSiriBehavior:(BOOL)a6;

@end
