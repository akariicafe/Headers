@class NSIndexSet;
@protocol PXTilingControllerPreheatHandler;

@interface PXTilingControllerPreheatRecord : NSObject

@property (readonly, weak, nonatomic) id<PXTilingControllerPreheatHandler> preheatHandler;
@property (readonly, nonatomic) void *context;
@property (nonatomic) unsigned long long tileGroup;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSIndexSet *preheatedTileIndexes;

- (void).cxx_destruct;
- (id)initWithPreheatHandler:(id)a0 context:(void *)a1;

@end
