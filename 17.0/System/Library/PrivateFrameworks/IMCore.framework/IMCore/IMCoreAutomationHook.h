@class IMAccount;

@interface IMCoreAutomationHook : NSObject {
    IMAccount *_imessageAccount;
}

@property (readonly) IMAccount *bestiMessageAccount;

+ (id)stringFromAutomationErrorCode:(long long)a0;

- (void).cxx_destruct;
- (id)chatForHandles:(id)a0 error:(id *)a1 results:(id)a2;
- (id)existingChatForGroupID:(id)a0 error:(id *)a1 results:(id)a2;
- (id)handlesFromStrings:(id)a0 error:(id *)a1 results:(id)a2;

@end
