@class NSString, NSArray;

@interface MLLayerPath : NSObject <NSCopying>

@property (copy, nonatomic) NSString *layerName;
@property (copy, nonatomic) NSArray *scopedModelNames;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToMLLayerPath:(id)a0;
- (id)initWithScopedModelAndLayerName:(id)a0 layerName:(id)a1;
- (void).cxx_destruct;
- (void)appendPathComponent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
