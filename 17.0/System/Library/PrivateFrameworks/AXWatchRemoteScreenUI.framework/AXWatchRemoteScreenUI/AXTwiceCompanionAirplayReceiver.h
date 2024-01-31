@class APRKStreamRenderer, NSString;
@protocol AXTwiceCompanionAirplayReceiverDelegate;

@interface AXTwiceCompanionAirplayReceiver : NSObject <APRKStreamRendererDelegate, APRKStreamRenderingManagerDelegate>

@property (retain, nonatomic) APRKStreamRenderer *streamRenderer;
@property (weak, nonatomic) id<AXTwiceCompanionAirplayReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (id)start;
- (void)cleanup;
- (void).cxx_destruct;
- (void)didChangeStreamRendererModeTo:(unsigned long long)a0 forRenderer:(id)a1;
- (void)didStartStreamingWithRenderer:(id)a0;
- (void)didStopStreamingWithRenderer:(id)a0;
- (void)shouldHideGlobalPasscode;
- (void)shouldShowGlobalPasscodeWithString:(id)a0 withClientName:(id)a1;

@end
