@class NSArray, NSString;

@interface CSServerEndpointFeatures : NSObject

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) double eosLikelihood;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) double silencePosterior;
@property (nonatomic) long long processedAudioDurationInMilliseconds;
@property (copy, nonatomic) NSString *taskName;

+ (id)initialResultCandidateFeatures;
+ (id)initialServerEndpointFeatures;

- (id)dictionary;
- (id)initWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 taskName:(id)a5 processedAudioDurationInMilliseconds:(long long)a6;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWordCount:(long long)a0 trailingSilenceFrames:(long long)a1 endOfSilenceLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 taskName:(id)a5;

@end
