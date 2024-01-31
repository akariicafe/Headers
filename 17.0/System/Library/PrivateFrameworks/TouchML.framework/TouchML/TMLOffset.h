@interface TMLOffset : NSObject <TMLOffsetJSExports, NSCopying>

@property (readonly, nonatomic) struct UIOffset { double horizontal; double vertical; } offset;
@property (readonly, nonatomic) double horizontal;
@property (readonly, nonatomic) double vertical;

+ (void)initializeJSContext:(id)a0;

- (id)initWithOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UIOffsetValue;

@end
