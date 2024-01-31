@interface SiriFindMy.FindFriendIntentHandler : NSObject <FindFriendIntentHandling> {
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ siriEnvironment;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmFindFriend:(id)a0 completion:(id /* block */)a1;
- (void)handleFindFriend:(id)a0 completion:(id /* block */)a1;
- (void)resolveFriendForFindFriend:(id)a0 withCompletion:(id /* block */)a1;

@end
