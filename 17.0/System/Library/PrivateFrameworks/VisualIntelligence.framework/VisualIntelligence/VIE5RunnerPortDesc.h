@class NSArray;

@interface VIE5RunnerPortDesc : NSObject

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) union VIE5RunnerPortDType { unsigned long long surface; unsigned long long tensor; } dtype;
@property (readonly, nonatomic) unsigned long long csize;
@property (readonly, nonatomic) NSArray *strides;

- (void).cxx_destruct;
- (id)initWithShape:(id)a0 type:(unsigned long long)a1 dtype:(union VIE5RunnerPortDType { unsigned long long x0; unsigned long long x1; })a2 csize:(unsigned long long)a3 strides:(id)a4;

@end
