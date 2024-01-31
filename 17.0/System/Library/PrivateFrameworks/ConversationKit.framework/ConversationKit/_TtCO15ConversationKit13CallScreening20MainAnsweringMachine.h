@class NSURL, NSString;

@interface _TtCO15ConversationKit13CallScreening20MainAnsweringMachine : _TtCs12_SwiftObject <CNKAnsweringMachine> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ callServices;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ isAnsweringMachineAvailable;
}

@property (nonatomic, readonly) BOOL isEnabled;

- (void)openURL:(NSURL *)a0 completion:(void (^)(BOOL))a1;
- (void)screenCallWithUUID:(NSString *)a0 manualScreening:(BOOL)a1 completion:(void (^)(BOOL))a2;

@end
