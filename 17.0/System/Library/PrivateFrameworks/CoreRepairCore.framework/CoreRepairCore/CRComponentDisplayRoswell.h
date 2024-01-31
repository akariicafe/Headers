@class NSString;

@interface CRComponentDisplayRoswell : CRComponentBase {
    NSString *identiferBase64;
}

+ (id)sharedSingleton;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)identiferBase64;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;
- (void)setIdentiferBase64:(id)a0;
- (void)signDisplayRoswellWith:(id)a0 withReply:(id /* block */)a1;

@end
