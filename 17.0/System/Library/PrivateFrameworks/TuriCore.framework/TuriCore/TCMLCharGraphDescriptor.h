@class NSDictionary;

@interface TCMLCharGraphDescriptor : NSObject

@property (retain, nonatomic) NSDictionary *additionDescs;
@property (retain, nonatomic) NSDictionary *averagePoolDesc;
@property (retain, nonatomic) NSDictionary *batchNormDescs;
@property (retain, nonatomic) NSDictionary *catDescs;
@property (retain, nonatomic) NSDictionary *chunkDescs;
@property (retain, nonatomic) NSDictionary *convDescs;
@property (retain, nonatomic) NSDictionary *dropoutDescs;
@property (retain, nonatomic) NSDictionary *transposeDescs;

- (void).cxx_destruct;

@end
