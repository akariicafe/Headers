@class NSString, ICASCollabActivityContextPath, ICASEndState, ICASStartState;

@interface ICASEditorCallOutData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASCollabActivityContextPath *collabActivityContextPath;
@property (readonly, nonatomic) ICASStartState *startState;
@property (readonly, nonatomic) ICASEndState *endState;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCollabActivityContextPath:(id)a0 startState:(id)a1 endState:(id)a2;

@end
