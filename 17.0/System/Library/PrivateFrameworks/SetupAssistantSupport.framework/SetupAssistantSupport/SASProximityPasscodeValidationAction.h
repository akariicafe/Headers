@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction

@property (retain) NSString *passcode;
@property BOOL passcodeValid;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:(id)a0;

@end
