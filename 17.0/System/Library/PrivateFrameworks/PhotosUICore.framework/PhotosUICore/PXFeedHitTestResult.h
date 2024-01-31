@class PXSectionedObjectReference;

@interface PXFeedHitTestResult : PXGHitTestResult

@property (readonly, nonatomic) id /* block */ primaryAction;
@property (readonly, nonatomic) id /* block */ touchAction;
@property (readonly, nonatomic) id /* block */ hoverAction;
@property (readonly, nonatomic) id /* block */ presentMenuAction;
@property (readonly, nonatomic) PXSectionedObjectReference *objectReference;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } dataSourceIndexPath;

- (void).cxx_destruct;
- (id)hoverAction:(id /* block */)a0;
- (id)initWithSpriteIndex:(unsigned int)a0 layout:(id)a1;
- (id)initWithSpriteIndex:(unsigned int)a0 layout:(id)a1 identifier:(id)a2;
- (id)objectReference:(id)a0;
- (id)presentMenuAction:(id /* block */)a0;
- (id)primaryAction:(id /* block */)a0;
- (id)touchAction:(id /* block */)a0;

@end
