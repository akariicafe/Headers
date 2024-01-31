@class NSString, NSDateInterval, ATXAnchorModelPredictionOffsetFromAnchorOccurrence, ATXDuetEvent;
@protocol ATXAnchorModelCandidateClassifierProtocol;

@interface ATXAnchorModelPrediction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *anchorType;
@property (readonly, nonatomic) ATXDuetEvent *anchorEvent;
@property (readonly, nonatomic) NSString *candidateType;
@property (readonly, nonatomic) NSString *candidateId;
@property (readonly, nonatomic) NSDateInterval *dateIntervalForPrediction;
@property (readonly, nonatomic) ATXAnchorModelPredictionOffsetFromAnchorOccurrence *offsetFromAnchorToShowPrediction;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned long long numUniqueOccurrencesAfterAnchor;
@property (readonly, nonatomic) double posteriorProbability;
@property (readonly, nonatomic) double classConditionalProbability;
@property (readonly, nonatomic) double standardDeviationOfOffsetFromAnchor;
@property (readonly, nonatomic) double anchorPopularity;
@property (readonly, nonatomic) double globalPopularity;
@property (readonly, nonatomic) id<ATXAnchorModelCandidateClassifierProtocol> candidateClassifier;

- (id)init;
- (unsigned long long)hash;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchorType:(id)a0 anchorEvent:(id)a1 candidateType:(id)a2 candidateId:(id)a3 dateIntervalForPrediction:(id)a4 score:(double)a5 numUniqueOccurrencesAfterAnchor:(unsigned long long)a6 posteriorProbability:(double)a7 classConditionalProbability:(double)a8 standardDeviationOfOffsetFromAnchor:(double)a9 anchorPopularity:(double)a10 globalPopularity:(double)a11 offsetFromAnchorToShowPrediction:(id)a12 candidateClassifier:(id)a13;

@end
