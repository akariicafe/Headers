@interface AVAudioSessionServerFactory : NSObject

+ (id)createServerWithAudioControlQueue:(id)a0 delegate:(id)a1;
+ (id)createServer;
+ (id)createServerWithDelegate:(id)a0 audioControlQueue:(id)a1;

@end
