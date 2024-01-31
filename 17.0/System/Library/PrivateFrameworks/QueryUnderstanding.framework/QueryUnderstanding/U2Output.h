@class NSNumber, NSArray, NSString;

@interface U2Output : NSObject <QUUnderstandingOutput>

@property (retain, nonatomic) NSNumber *confidenceScore;
@property (retain, nonatomic) NSNumber *intentId;
@property (retain, nonatomic) NSArray *tokens;
@property (retain, nonatomic) NSArray *tokenRanges;
@property (retain, nonatomic) NSArray *argIdsForTokens;
@property (retain, nonatomic) NSArray *argScoresForTokens;
@property (nonatomic) unsigned long long predictionTime;
@property (nonatomic) unsigned long long embeddingsTime;
@property (readonly, nonatomic) NSArray *argIds;
@property (readonly, nonatomic) NSArray *argScores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
