@interface AVCPacketFilter : NSObject

@property (readonly) BOOL isRTPFilter;

- (BOOL)isMatchedPacket:(const void *)a0 size:(int)a1;

@end
