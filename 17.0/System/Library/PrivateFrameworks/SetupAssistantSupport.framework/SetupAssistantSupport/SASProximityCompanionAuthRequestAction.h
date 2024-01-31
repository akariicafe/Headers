@class AKDevice, ACAccount;

@interface SASProximityCompanionAuthRequestAction : SASProximityAction

@property (retain) AKDevice *companionDevice;
@property (retain) ACAccount *account;

+ (unsigned long long)actionID;

- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)responsePayload;
- (id)idmsAccountForiCloud;
- (void)setResponseFromData:(id)a0;

@end
