@class NSDictionary, SGMIWarningsDetectionRegex;

@interface SGMIWarningsDetectionRegexes : NSObject

@property (readonly, nonatomic) SGMIWarningsDetectionRegex *subject;
@property (readonly, nonatomic) SGMIWarningsDetectionRegex *body;
@property (readonly, nonatomic) NSDictionary *dataDetectorMappedAdditions;
@property (readonly, nonatomic) NSDictionary *dataDetectorAdditions;

+ (id)_loadDataDetectorAdditionDict:(id)a0 compiledRegexCache:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 compiledRegexCache:(id)a1;

@end
