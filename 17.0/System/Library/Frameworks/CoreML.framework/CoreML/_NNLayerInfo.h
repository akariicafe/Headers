@class NSString;

@interface _NNLayerInfo : NSObject

@property (readonly, nonatomic) BOOL bidirectional;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *concatenatedInputNames;

- (id)initWithType:(id)a0 concatenatedInputNames:(id)a1 bidirectional:(BOOL)a2;
- (void).cxx_destruct;

@end
