@interface _UIEventSessionTapAction : _UIEventSessionAction

@property (nonatomic) struct CGPoint { double x; double y; } buttonLocation;

- (long long)actionType;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)typeEncoding;

@end
