@class BMStream, BMSource, NSString;

@interface SCAnalytics : NSObject

@property (retain, nonatomic) BMStream *biomeMASStream;
@property (retain, nonatomic) BMSource *biomeMASSource;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic) int ageGroup;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)biomeAgeGroup;
- (BOOL)collectMediaAnalysisServiceEvent:(int)a0 :(BOOL)a1;

@end
