@interface _PSZKWFTUnstructuredRemindersConfig : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) long long defaultConfidenceCategory;
@property (readonly, nonatomic) double startSecondsFromQuery;
@property (readonly, nonatomic) double endSecondsFromQuery;
@property (readonly, nonatomic) float priorScoreThreshold;

- (id)initWithIsEnabled:(BOOL)a0 defaultConfidenceCategory:(long long)a1 startSecondsFromQuery:(double)a2 endSecondsFromQuery:(double)a3 priorScoreThreshold:(float)a4;
- (id)initWithIsEnabled:(BOOL)a0 defaultConfidenceCategory:(long long)a1;

@end
