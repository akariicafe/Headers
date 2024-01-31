@class NSString, CHSChronoServicesConnection, CHSWidgetConfiguration;

@interface CHSWidgetHost : NSObject <BSDescriptionStreamable> {
    NSString *_loggingIdentifier;
    CHSChronoServicesConnection *_connection;
    unsigned long long _activationState;
    BOOL _invalid;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CHSWidgetConfiguration *configuration;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_connectionUpdateActivationState;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 active:(BOOL)a2;
- (void)invalidate;
- (void)_connectionCreateOrUpdateConfigurations;
- (void)activate;
- (id)_connectionCopy;
- (unsigned long long)_activationState;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)_initWithHost:(id)a0;
- (void)_connectionRemoveHost;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 activationState:(unsigned long long)a2 connection:(id)a3;
- (void)deactivate;

@end
