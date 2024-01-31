@class NSString, BSXPCServiceConnectionMessage;

@interface BSXPCServiceConnectionActivationMessage : NSObject <BSXPCServiceConnectionHandshake, BSInvalidatable> {
    BSXPCServiceConnectionMessage *_message;
    int _invalid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
