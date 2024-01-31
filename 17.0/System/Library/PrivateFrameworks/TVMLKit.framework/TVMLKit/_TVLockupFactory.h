@interface _TVLockupFactory : NSObject

+ (id)_configurationIdentifierForElement:(id)a0;
+ (void)_configureCell:(id)a0 layout:(id)a1 element:(id)a2;
+ (void)_configureStackingPoster:(id)a0 layout:(id)a1 element:(id)a2 forMetrics:(BOOL)a3;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_customCellPaddingForCellMetrics:(struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; })a0 withCollectionCellMetrics:(struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; })a1 contentAlignment:(long long)a2;
+ (void)_validateCellMetrics:(struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; } *)a0;
+ (struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; })cellMetricsForCollectionElement:(id)a0;
+ (void)updateViewLayoutForCell:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (void)_registerLockup;

@end
