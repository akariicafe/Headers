@class NSString, NSDictionary, _PASLazyPurgeableResult;

@interface SGMultiHeadEspressoModelWrapper : NSObject

@property (retain, nonatomic) NSString *espressoModelFile;
@property (retain, nonatomic) NSString *inputName;
@property (retain, nonatomic) NSDictionary *headDimensionality;
@property (retain, nonatomic) _PASLazyPurgeableResult *model;

- (void).cxx_destruct;

@end
