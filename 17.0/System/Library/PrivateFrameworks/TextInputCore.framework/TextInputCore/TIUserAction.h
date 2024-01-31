@class TIKeyboardState, TIDocumentState;

@interface TIUserAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double occurenceTime;
@property (nonatomic) int actionType;
@property (retain, nonatomic) TIDocumentState *documentState;
@property (retain, nonatomic) TIKeyboardState *keyboardState;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTIKeyboardState:(id)a0;

@end
