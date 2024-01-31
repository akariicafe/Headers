@class NSNumber, NSString;

@interface SGMultiHeadPredictionItem : NSObject

@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithScore:(id)a0 label:(id)a1;

@end
