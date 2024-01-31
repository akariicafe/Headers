@class NSOrderedSet, NSDictionary, PARSession, NSDate, SFRankingFeedback, NSString;

@interface NTParsecZKWNewsOperation : FCOperation

@property (copy, nonatomic) NSDate *fetchDate;
@property (copy, nonatomic) NSOrderedSet *resultSearchResultIDs;
@property (copy, nonatomic) NSDictionary *resultSearchResultsBySearchResultID;
@property (copy, nonatomic) SFRankingFeedback *resultRankingFeedback;
@property (retain, nonatomic) PARSession *session;
@property (copy, nonatomic) id /* block */ newsCompletionHandler;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *keyboardInputMode;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)setTimeoutDuration:(double)a0;

@end
