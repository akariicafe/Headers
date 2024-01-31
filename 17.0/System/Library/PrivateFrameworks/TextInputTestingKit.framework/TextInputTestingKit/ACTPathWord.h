@class TIContinuousPath, NSString, TTKKeyboardPlane;

@interface ACTPathWord : ACTUserAction

@property (readonly, nonatomic) TIContinuousPath *path;
@property (readonly, nonatomic) NSString *intendedString;
@property (readonly, nonatomic) TTKKeyboardPlane *keyplane;
@property (readonly, nonatomic) BOOL fromUserData;
@property (copy, nonatomic) id /* block */ callback;

- (id)description;
- (void).cxx_destruct;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithPath:(id)a0 intendedString:(id)a1 keyplane:(id)a2 fromUserData:(BOOL)a3;

@end
