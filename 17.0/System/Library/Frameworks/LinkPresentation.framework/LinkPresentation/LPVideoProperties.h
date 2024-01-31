@class UIColor;

@interface LPVideoProperties : LPVisualMediaProperties <NSCopying>

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) UIColor *_overlappingControlsColor;
@property (nonatomic) BOOL hasAudio;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
