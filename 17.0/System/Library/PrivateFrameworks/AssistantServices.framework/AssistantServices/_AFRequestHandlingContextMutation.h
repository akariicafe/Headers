@class NSString, AFRequestHandlingContext;

@interface _AFRequestHandlingContextMutation : NSObject <AFRequestHandlingContextMutating> {
    AFRequestHandlingContext *_base;
    NSString *_requestID;
    NSString *_inputDeviceID;
    NSString *_inputAssistantID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRequestID : 1; unsigned char hasInputDeviceID : 1; unsigned char hasInputAssistantID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setRequestID:(id)a0;
- (void).cxx_destruct;
- (id)getInputAssistantID;
- (id)getInputDeviceID;
- (id)getRequestID;
- (void)setInputAssistantID:(id)a0;
- (void)setInputDeviceID:(id)a0;

@end
