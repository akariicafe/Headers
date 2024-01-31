@interface CopresenceCore.PresenceHostSession : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ presenceController;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ suspensionAssertions;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ abcReporter;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ presentDeviceListener;
    void /* unknown type, empty encoding */ sessionSuspensionController;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
