@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property (readonly, nonatomic) struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x0; float x1; } x0; float x1[2]; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; } event;
@property (readonly, nonatomic) unsigned long long virtualDeviceID;

- (unsigned long long)type;
- (id)initWithTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x0; float x1; } x0; float x1[2]; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; })a0 virtualDeviceID:(unsigned long long)a1;

@end
