@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect {
    double _horizontalAccelerationBoostFactor;
    double _verticalAccelerationBoostFactor;
}

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id minimumRelativeValue;
@property (retain, nonatomic) id maximumRelativeValue;

- (id)init;
- (double)_horizontalAccelerationBoostFactor;
- (void)_setHorizontalAccelerationBoostFactor:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setKeyPath:(id)a0;
- (id)_keyPathsAndRelativeValuesForPose:(id)a0;
- (double)_verticalAccelerationBoostFactor;
- (void)_setType:(long long)a0;
- (id)description;
- (id)initWithKeyPath:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (void)_setVerticalAccelerationBoostFactor:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
