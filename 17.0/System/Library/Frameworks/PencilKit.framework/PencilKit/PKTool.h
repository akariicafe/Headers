@class PKInk, PKToolConfiguration;

@interface PKTool : NSObject <NSCopying>

@property (readonly, nonatomic) PKToolConfiguration *_configuration;
@property (readonly, nonatomic) PKInk *ink;

+ (BOOL)_inkIsInkingTool:(id)a0;
+ (id)_toolWithInk:(id)a0;
+ (id)_toolWithInk:(id)a0 configuration:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithInk:(id)a0;
- (id)_initWithInk:(id)a0 configuration:(id)a1;

@end
