@class NSString;

@interface ICASTipLearnMoreData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *learnMoreTipName;
@property (readonly, nonatomic) NSString *tipFeature;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithLearnMoreTipName:(id)a0 tipFeature:(id)a1;

@end
