@class NSString, NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile <_GCKeyboardEventSink> {
    NSArray *_keys;
    NSSet *_allCodes;
    int _numberOfKeysPressed;
    id _keyboardEventObservation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ keyChangedHandlerPrivate;
@property (copy, nonatomic) id /* block */ keyChangedHandler;
@property (readonly, nonatomic, getter=isAnyKeyPressed) BOOL anyKeyPressed;

- (id)initWithIdentifier:(id)a0;
- (void)handleKeyboardEvent:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)buttonForKeyCode:(long long)a0;
- (BOOL)hasButton:(long long)a0;
- (void)setKeyboardEventSource:(id)a0;

@end
