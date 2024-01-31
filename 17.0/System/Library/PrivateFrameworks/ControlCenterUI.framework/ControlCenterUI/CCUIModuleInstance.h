@class CCSModuleMetadata;
@protocol CCUIContentModule;

@interface CCUIModuleInstance : NSObject <NSCopying>

@property (readonly, nonatomic) CCSModuleMetadata *metadata;
@property (readonly, nonatomic) id<CCUIContentModule> module;
@property (readonly, nonatomic) struct CCUILayoutSize { unsigned long long width; unsigned long long height; } prototypeModuleSize;

- (id)initWithMetadata:(id)a0 module:(id)a1 prototypeModuleSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
