@class NSArray, NSMutableArray;

@interface TIDeleteWordEvent : TIUserAction

@property (retain, nonatomic) NSMutableArray *allKeyboardInputsM;
@property (retain, nonatomic) NSMutableArray *allTouchesM;
@property (retain, nonatomic) NSMutableArray *candidatesOfferedM;
@property (retain, nonatomic) NSMutableArray *touchLayoutsM;
@property (readonly, nonatomic) NSArray *allKeyboardInputs;
@property (readonly, nonatomic) NSArray *allTouches;
@property (readonly, nonatomic) NSArray *candidatesOffered;
@property (readonly, nonatomic) NSArray *touchLayouts;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addCandidatesOffered:(id)a0;
- (void)addKeyInput:(id)a0;
- (void)addKeyInputs:(id)a0;
- (void)addTouches:(id)a0 withLayoutIDs:(id)a1;
- (id)initWithTIKeyboardState:(id)a0;

@end
