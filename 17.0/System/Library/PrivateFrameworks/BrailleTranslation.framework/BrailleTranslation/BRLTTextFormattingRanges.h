@class NSMutableArray;

@interface BRLTTextFormattingRanges : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *boldRanges;
@property (retain, nonatomic) NSMutableArray *italicRanges;
@property (retain, nonatomic) NSMutableArray *underlineRanges;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addItalicRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addBoldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addUnderlineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
