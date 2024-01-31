@class NSString;

@interface _UIContentInsetsEnvironment : NSObject <_UIContentInsetsEnvironment, NSCopying>

@property (nonatomic) long long insetReference;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } safeAreaInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } layoutMarginsInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } readableContentInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } effectiveInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)insetEnvironmentFromParentEnvironment:(id)a0 insetReference:(long long)a1;
+ (id)insetEnvironmentForInsetReference:(long long)a0 safeAreaInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 layoutMarginsInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 readableContentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a3;
+ (id)insetEnvironmentForView:(id)a0 insetReference:(long long)a1;
+ (id)nullEnvironment;

- (id)layoutContainerForContainerSize:(struct CGSize { double x0; double x1; })a0 layoutAxis:(unsigned long long)a1;
- (id)initWithInsetReference:(long long)a0 safeAreaInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 layoutMarginsInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 readableContentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)layoutContainerForInsetReference:(long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1 layoutAxis:(unsigned long long)a2;

@end
