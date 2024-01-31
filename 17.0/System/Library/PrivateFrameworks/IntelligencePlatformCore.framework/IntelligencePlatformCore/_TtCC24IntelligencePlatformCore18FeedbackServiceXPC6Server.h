@interface _TtCC24IntelligencePlatformCore18FeedbackServiceXPC6Server : NSObject <GDFeedbackServiceXPCProtocol> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ clientIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)logFeedback:(id)a0 ofType:(id)a1 ofVariant:(id)a2 forEvent:(long long)a3 withTimestamp:(id)a4 shouldProcessImmediately:(BOOL)a5 completion:(id /* block */)a6;

@end
