@interface _TVStackRow : NSObject

@property (nonatomic) struct TVRowMetrics { long long rowType; double rowHeight; struct { double top; double bottom; } rowPadding; struct { double top; double bottom; } rowInset; struct { double top; double bottom; } rowInsetAlt; struct { double top; double bottom; } rowMargin; } rowMetrics;
@property (nonatomic, getter=isHosted) BOOL hosted;
@property (nonatomic, getter=isBounded) BOOL bounded;
@property (nonatomic) long long sectionIndex;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
