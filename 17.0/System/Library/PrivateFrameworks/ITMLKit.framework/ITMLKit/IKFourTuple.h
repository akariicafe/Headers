@class NSString;

@interface IKFourTuple : NSObject <NSCopying> {
    long long _specifiedValueCount;
    double _values[4];
}

@property (readonly, nonatomic) NSString *namedStyle;
@property (readonly, nonatomic) struct IKCornerRadii { double x0; double x1; double x2; double x3; } cornerRadiiValue;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsetsValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCornerRadii:(struct IKCornerRadii { double x0; double x1; double x2; double x3; })a0;
- (id)initWithStyleString:(id)a0;

@end
