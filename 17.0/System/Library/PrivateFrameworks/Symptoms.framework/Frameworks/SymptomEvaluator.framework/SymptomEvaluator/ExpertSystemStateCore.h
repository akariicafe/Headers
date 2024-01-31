@class StopWatch, NSString, NSDictionary;

@interface ExpertSystemStateCore : NSObject

@property (readonly) NSString *label;
@property (readonly) unsigned long long rank;
@property (readonly) NSDictionary *entryPreds;
@property (readonly) StopWatch *sojournTime;
@property (copy, nonatomic) id /* block */ entryAction;
@property (copy, nonatomic) id /* block */ loopEvaluation;
@property (copy, nonatomic) id /* block */ exitAction;
@property int loopTokens;
@property (retain) ExpertSystemStateCore *previousState;

- (void).cxx_destruct;
- (id)initStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryPreds:(id)a2;

@end
