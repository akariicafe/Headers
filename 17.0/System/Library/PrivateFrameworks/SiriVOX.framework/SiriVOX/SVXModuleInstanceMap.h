@class NSString, SVXSessionManager, SVXClientServiceServer, SVXDeviceSetupManager, NSDictionary, SVXSpeechSynthesizer, SVXServiceCommandHandler, SVXSystemObserver;

@interface SVXModuleInstanceMap : NSObject <SVXModuleInstanceProviding>

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) SVXClientServiceServer *clientServiceServer;
@property (readonly, nonatomic) SVXServiceCommandHandler *serviceCommandHandler;
@property (readonly, nonatomic) SVXSessionManager *sessionManager;
@property (readonly, nonatomic) SVXSpeechSynthesizer *speechSynthesizer;
@property (readonly, nonatomic) SVXSystemObserver *systemObserver;
@property (readonly, nonatomic) SVXDeviceSetupManager *deviceSetupManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)moduleInstanceWithIdentifier:(id)a0;

@end
