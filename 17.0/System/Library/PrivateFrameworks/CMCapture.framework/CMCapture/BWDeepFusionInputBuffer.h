@class NSDictionary;

@interface BWDeepFusionInputBuffer : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) struct __CVBuffer { } *lscGainMap;
@property (readonly, nonatomic) NSDictionary *lscGainMapParameters;

- (void)dealloc;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 type:(unsigned long long)a1 metadata:(id)a2 lscGainMap:(struct __CVBuffer { } *)a3 lscGainMapParameters:(id)a4;

@end
