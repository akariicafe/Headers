@class NSDictionary;

@interface CSNovDetectorResult : NSObject

@property (nonatomic) unsigned long long sampleFed;
@property (nonatomic) unsigned long long bestPhrase;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) BOOL earlyWarning;
@property (nonatomic) BOOL isRescoring;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)initWithResult:(id)a0;

@end
