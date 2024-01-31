@interface CopresenceCore.BackgroundSessionManager : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sessions;
    void /* unknown type, empty encoding */ presenceSessions;
    void /* unknown type, empty encoding */ mockIDSGroupSessionProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ serviceProvider;
    void /* unknown type, empty encoding */ personalPresenceControllerProvider;
    void /* unknown type, empty encoding */ presenceControllerProvider;
    void /* unknown type, empty encoding */ sessionSuspensionControllerProvider;
    void /* unknown type, empty encoding */ featureFlags;
}

- (id)init;
- (void).cxx_destruct;

@end
