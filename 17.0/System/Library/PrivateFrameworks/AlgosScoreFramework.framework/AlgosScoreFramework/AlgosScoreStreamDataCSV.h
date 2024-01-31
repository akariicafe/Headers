@class NSDictionary;

@interface AlgosScoreStreamDataCSV : AlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;
@property (nonatomic) BOOL isMusic;

+ (id)streamDataCSV:(BOOL)a0;

- (int)transformer;
- (void).cxx_destruct;
- (id)initIsMusic:(BOOL)a0;
- (BOOL)matchesMethod:(id)a0 code:(long long)a1;
- (id)setUpMethods;
- (BOOL)validMethod:(long long)a0;

@end
