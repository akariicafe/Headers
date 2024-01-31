@class BSColor, NSString;

@interface CHSWatchComplicationsCurvedLabelMetrics : NSObject <BSXPCSecureCoding, NSCopying>

@property (nonatomic) BOOL interior;
@property (nonatomic) double tracking;
@property (nonatomic) struct CGPoint { double x; double y; } circleCenter;
@property (nonatomic) double circleRadius;
@property (nonatomic) double maximumAngularWidth;
@property (nonatomic) double centerAngle;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) BSColor *textColor;
@property (nonatomic) unsigned long long accessoryPlacement;
@property (nonatomic) double accessoryPadding;
@property (nonatomic) struct CGSize { double width; double height; } accessoryMaxSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInterior:(BOOL)a0 tracking:(double)a1 circleCenter:(struct CGPoint { double x0; double x1; })a2 circleRadius:(double)a3 maximumAngularWidth:(double)a4 centerAngle:(double)a5 fontSize:(double)a6 textColor:(id)a7 accessoryPlacement:(unsigned long long)a8 accessoryPadding:(double)a9 accessoryMaxSize:(struct CGSize { double x0; double x1; })a10;

@end
