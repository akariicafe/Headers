@interface WFSearchVisualConfiguration : NSObject <NSCopying>

@property (nonatomic) double textFieldWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textFieldPortraitLayoutInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textFieldLandscapeLayoutInsets;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
