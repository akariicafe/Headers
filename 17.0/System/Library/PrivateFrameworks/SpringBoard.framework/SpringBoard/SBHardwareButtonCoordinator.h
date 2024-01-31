@class NSDictionary, NSCountedSet;

@interface SBHardwareButtonCoordinator : NSObject {
    int _sysdiagnoseDidBeginNotificationToken;
    NSDictionary *_buttonIdentifierToButtonInstance;
    NSCountedSet *_canceledButtonIdentifiers;
    NSCountedSet *_activeButtonIdentifiers;
    NSDictionary *_buttonIdentifierToSuppressedButtonIdentifiers;
    NSDictionary *_suppressedButtonIdentifierToSuppressorButtonIdentifiers;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)assertButtonIsActive:(id)a0;
- (BOOL)buttonShouldStart:(id)a0;
- (id)cancelHardwareButtons:(id)a0 fromButton:(id)a1;

@end
