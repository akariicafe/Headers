@class NSString;
@protocol ATXDNDModeConfigurationClientListenerDelegate;

@interface ATXDNDModeConfigurationClientListener : NSObject <DNDModeConfigurationServiceListener>

@property (weak, nonatomic) id<ATXDNDModeConfigurationClientListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
