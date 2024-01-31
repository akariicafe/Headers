@class MLModel;

@interface VCPCoreMLRequest : NSObject

@property (readonly, nonatomic) MLModel *model;

- (void).cxx_destruct;
- (id)initWithModelName:(id)a0;

@end
