@class NSString, NSError;

@interface Sharing.AskToAirDropSenderController : NSObject {
    void /* unknown type, empty encoding */ nearbyDeviceCountChangedHandler;
    void /* unknown type, empty encoding */ didStopHandler;
    void /* unknown type, empty encoding */ airDropClient;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ queue;
@property (nonatomic) void /* unknown type, empty encoding */ nearbyDeviceCount;
@property (nonatomic) BOOL hasSeenPrivacyPrompt;
@property (nonatomic, copy) id /* block */ nearbyDeviceCountChangedHandler;
@property (nonatomic, copy) id /* block */ didStopHandler;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)fetchPrivacyPromptInformationWithCompletion:(id /* block */)a0;
- (void)fetchSharingNameWithCompletionHandler:(void (^)(NSString *, NSError *))a0;
- (void)startAs:(id)a0;

@end
