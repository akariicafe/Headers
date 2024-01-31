@class MLMultiArray;

@interface SGMISaliencyModelOutput : NSObject

@property (retain, nonatomic) MLMultiArray *data;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (double)regularScore;
- (double)salientScore;

@end
