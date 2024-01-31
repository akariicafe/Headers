@class SVXClientInfo, NSString, SVXSystemEvent, AFRequestInfo, NSDictionary, SVXActivationContext, SVXButtonEvent;

@interface _SVXActivationContextMutation : NSObject <SVXActivationContextMutating> {
    SVXActivationContext *_baseModel;
    long long _source;
    unsigned long long _timestamp;
    SVXButtonEvent *_buttonEvent;
    SVXSystemEvent *_systemEvent;
    SVXClientInfo *_clientInfo;
    AFRequestInfo *_requestInfo;
    NSDictionary *_userInfo;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSource : 1; unsigned char hasTimestamp : 1; unsigned char hasButtonEvent : 1; unsigned char hasSystemEvent : 1; unsigned char hasClientInfo : 1; unsigned char hasRequestInfo : 1; unsigned char hasUserInfo : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setClientInfo:(id)a0;
- (id)generate;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setSource:(long long)a0;
- (void)setUserInfo:(id)a0;
- (void).cxx_destruct;
- (void)setButtonEvent:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setRequestInfo:(id)a0;
- (void)setSystemEvent:(id)a0;

@end
