@class NSSet, NSString;
@protocol BKHIDEventSenderInfo;

@interface BKHIDPointerEventRecord : NSObject <BSDescriptionProviding> {
    BOOL _didTrackPointerMovement;
    BOOL _didTrackButtonDown;
}

@property (retain, nonatomic) id<BKHIDEventSenderInfo> senderInfo;
@property (retain, nonatomic) NSSet *destinations;
@property (nonatomic) double destinationCaptureTime;
@property (nonatomic) BOOL trackingPointerMovement;
@property (nonatomic) BOOL trackingButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
