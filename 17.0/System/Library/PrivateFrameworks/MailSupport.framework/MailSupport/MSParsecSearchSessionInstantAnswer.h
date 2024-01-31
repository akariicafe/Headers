@class SFCard;

@interface MSParsecSearchSessionInstantAnswer : MSParsecSearchSessionMessageResult

@property (readonly, nonatomic) SFCard *inlineCard;
@property (readonly, nonatomic) BOOL isInstantAnswerUpdated;

+ (id)instantAnswerWithIdentifier:(id)a0 date:(id)a1 inlineCard:(id)a2 isInstantAnswerUpdated:(BOOL)a3;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initWithIdentifier:(id)a0 date:(id)a1 inlineCard:(id)a2 isInstantAnswerUpdated:(BOOL)a3;

@end
