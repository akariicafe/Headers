@class NSString, NSDictionary;

@interface CVNLPCLIPModel : NSObject

@property (readonly, nonatomic) struct shared_ptr<cvnlp::clip::CLIPModel> { struct CLIPModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSDictionary *options;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)encodeImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)encodeText:(id)a0 error:(id *)a1;
- (id)encodeTextAverage:(id)a0 error:(id *)a1;

@end
