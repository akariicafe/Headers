@class NSString, RTIDataPayload;
@protocol RTIInputSystemPayloadDelegate;

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate>

@property (readonly, nonatomic) unsigned long long payloadVersion;
@property (weak, nonatomic) id<RTIInputSystemPayloadDelegate> payloadDelegate;
@property (weak, nonatomic) id<RTIInputSystemPayloadDelegate> forwardingPayloadDelegate;
@property (readonly, copy, nonatomic) RTIDataPayload *currentForwardingDataPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleForwardingResponseActionPayload:(id)a0;
- (id)init;
- (void)flushOperations;
- (void)setSessionDelegate:(id)a0;
- (void)notifySessionDelegateDidBegin:(id)a0;
- (id)sessionIndependentPayloadDelegate;
- (void).cxx_destruct;
- (void)handleTextActionPayload:(id)a0;
- (void)addSessionDelegate:(id)a0;

@end
