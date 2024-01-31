@class NSString, SASPresentationAggregateState;

@interface _SASPresentationAggregateStateMutation : NSObject <SASPresentationAggregateStateMutating> {
    SASPresentationAggregateState *_baseModel;
    BOOL _canAcceptNewActivations;
    BOOL _didNewActivationAcceptanceChange;
    long long _requestState;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasCanAcceptNewActivations : 1; unsigned char hasDidNewActivationAcceptanceChange : 1; unsigned char hasRequestState : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRequestState:(long long)a0;
- (id)init;
- (id)generate;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setCanAcceptNewActivations:(BOOL)a0;
- (void)setDidNewActivationAcceptanceChange:(BOOL)a0;

@end
