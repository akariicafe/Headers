@interface _UIKeyboardArbiterClientSpringBoard : _UIKeyboardArbiterClientInputDestination

- (void)forceKeyboardAway;
- (void)restoreKeyboardWithId:(id)a0;
- (void)userSelectedApp:(id)a0 onCompletion:(id /* block */)a1;
- (void)preserveKeyboardWithId:(id)a0;
- (id)init;
- (void)userSelectedProcessIdentifier:(int)a0 withSceneIdentity:(id)a1 onCompletion:(id /* block */)a2;
- (void)willLock:(id)a0;
- (BOOL)allowedToShowKeyboard;
- (void)queue_keyboardIAVChanged:(double)a0 onComplete:(id /* block */)a1;
- (BOOL)isSpotlight:(id)a0;

@end
