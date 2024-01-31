@class NSAttributedString;

@interface CKTextMetricsRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double maximumHeight;
@property (nonatomic, getter=isAlreadyPadded) BOOL alreadyPadded;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInset;
@property (nonatomic) double minimumViewHeight;
@property (readonly) double adjustedMaximumWidth;
@property (readonly) struct CGSize { double x0; double x1; } adjustedMaximumSize;

- (id)initWithAttributedString:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
