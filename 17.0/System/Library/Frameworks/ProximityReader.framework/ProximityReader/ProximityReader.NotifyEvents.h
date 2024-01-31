@interface ProximityReader.NotifyEvents : NSObject {
    void /* unknown type, empty encoding */ notifyInterface;
}

+ (id)makeNotifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleIncomingCall;

@end
