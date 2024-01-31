@interface CKMessageEntryViewLayoutMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } entryViewContentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } entryViewTextAlignmentInsets;
@property (readonly, nonatomic) double defaultEntryContentViewHeight;
@property (readonly, nonatomic) double defaultSubjectEntryContentViewHeight;
@property (readonly, nonatomic) double defaultEntryViewHeight;
@property (readonly, nonatomic) double defaultSubjectEntryViewHeight;

+ (id)cachedMetricsRecalculatingIfNecessary;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)calculateTextMetrics;

@end
