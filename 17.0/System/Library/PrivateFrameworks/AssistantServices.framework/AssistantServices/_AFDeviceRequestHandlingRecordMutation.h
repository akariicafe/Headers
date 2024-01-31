@class NSString, AFDeviceRequestHandlingRecord;

@interface _AFDeviceRequestHandlingRecordMutation : NSObject <AFDeviceRequestHandlingRecordMutating> {
    AFDeviceRequestHandlingRecord *_base;
    NSString *_requestID;
    unsigned long long _deviceRoles;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRequestID : 1; unsigned char hasDeviceRoles : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setRequestID:(id)a0;
- (void).cxx_destruct;
- (void)setDeviceRoles:(unsigned long long)a0;
- (unsigned long long)getDeviceRoles;
- (id)getRequestID;

@end
