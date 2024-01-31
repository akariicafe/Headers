@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect

@property (copy, nonatomic) NSArray *motionEffects;

- (void)encodeWithCoder:(id)a0;
- (id)_keyPathsAndRelativeValuesForPose:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
