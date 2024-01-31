@class NSDictionary, NSString, IEBehaviorResponseUndo;

@interface IEBehaviorResponse : IEResponse

@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) IEBehaviorResponseUndo *undo;

- (void).cxx_destruct;

@end
