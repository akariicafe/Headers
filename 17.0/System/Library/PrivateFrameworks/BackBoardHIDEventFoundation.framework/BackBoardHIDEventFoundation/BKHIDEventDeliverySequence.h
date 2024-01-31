@class NSString, BKHIDEventDeliveryManager, NSMutableSet, BKSHIDEventKeyCommand;
@protocol BKHIDEventDispatcher, BKHIDEventSenderInfo, BKHIDBufferedEventProcessor;

@interface BKHIDEventDeliverySequence : NSObject <BSDescriptionStreamable, NSCopying> {
    id<BKHIDEventSenderInfo> _senderInfo;
    BKHIDEventDeliveryManager *_deliveryManager;
    id _additionalContext;
    NSMutableSet *_currentBuffers;
    NSMutableSet *_buffersWithIncompleteSequences;
    NSMutableSet *_currentResolutions;
    NSMutableSet *_resolutionsWithIncompleteSequences;
    NSMutableSet *_repostedToBuffers;
    struct __IOHIDEvent { } *_firstEvent;
}

@property (readonly) id firstAdditionalContext;
@property (readonly) BKSHIDEventKeyCommand *keyCommand;
@property (readonly) id<BKHIDEventDispatcher> dispatcher;
@property (readonly) id<BKHIDBufferedEventProcessor> processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buffers;
- (void)dealloc;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolutions;
- (void)bufferDidDrain:(id)a0;
- (void)_resolveDispatchTargetsToBuffers;
- (void)_resolveDispatchTargetsToBuffers:(id)a0 repostFirstEvent:(BOOL)a1;
- (id)initWithProcessor:(id)a0 dispatcher:(id)a1 senderInfo:(id)a2 additionalContext:(id)a3 keyCommand:(id)a4 deliveryManager:(id)a5 resolutions:(id)a6 buffers:(id)a7;
- (void)postEvent:(struct __IOHIDEvent { } *)a0 position:(long long)a1 additionalContext:(id)a2;
- (void)postEvent:(struct __IOHIDEvent { } *)a0 position:(long long)a1 additionalContext:(id)a2 fromBuffer:(id)a3 toResolution:(id)a4;
- (void)repostFirstEventToBufferedTargets:(id)a0;

@end
