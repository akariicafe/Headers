@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {
    BOOL _dummy;
    float _horizontalPriority;
    float _verticalPriority;
    struct CGSize { double width; double height; } _targetSize;
}

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToTargetInfo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
