@class NSHashTable;
@protocol TUICursorAccessoryAssertionControllerSubject;

@interface TUICursorAccessoryAssertionController : NSObject

@property (retain, nonatomic) NSHashTable *assertions;
@property (weak, nonatomic) id<TUICursorAccessoryAssertionControllerSubject> subject;

- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)updateSubjectWithAssertionState;
- (void)beginTrackingAssertion:(id)a0;
- (id)createAssertionWithType:(unsigned long long)a0 accessory:(id)a1;
- (void)endTrackingAssertion:(id)a0;

@end
