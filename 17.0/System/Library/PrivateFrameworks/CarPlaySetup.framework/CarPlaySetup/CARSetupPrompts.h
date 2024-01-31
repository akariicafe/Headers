@interface CARSetupPrompts : NSObject

+ (id)allowWhileLockedPromptForVehicleName:(id)a0 responseHandler:(id /* block */)a1;
+ (id)connectPromptWithResponseHandler:(id /* block */)a0;
+ (id)enhancedIntegrationPromptForVehicleName:(id)a0 responseHandler:(id /* block */)a1;
+ (id)useWirelessPromptWithResponseHandler:(id /* block */)a0;

@end
