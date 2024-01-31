@class NSString, HKProfileIdentifier;

@interface HealthAppLinkBuilder : NSObject

@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (retain, nonatomic) NSString *source;
@property BOOL useExternalURLScheme;

- (id)init;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfileIdentifier:(id)a0 useExternalURLScheme:(BOOL)a1;
- (id)initWithHealthStore:(id)a0 useExternalURLScheme:(BOOL)a1;
- (id)initWithProfileIdentifier:(id)a0;
- (id)initWithProfileIdentifier:(id)a0 source:(id)a1;
- (id)initWithProfileIdentifier:(id)a0 source:(id)a1 useExternalURLScheme:(BOOL)a2;

@end
