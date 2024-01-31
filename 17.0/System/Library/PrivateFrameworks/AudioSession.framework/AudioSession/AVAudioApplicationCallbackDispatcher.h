@interface AVAudioApplicationCallbackDispatcher : NSObject <AudioApplicationXPCServerCallbackProtocol>

- (void)pingClient:(unsigned int)a0;

@end
