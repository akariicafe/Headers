@class _TtC18ActivityUIServices28SystemApertureMetricsRequest, ACUISActivityItemMetricsRequest;

@interface ACUISSystemApertureMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices28SystemApertureMetricsRequest *_metricsRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double x0; double x1; } obstructionSize;
@property (nonatomic) double obstructionTopMargin;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *expandedMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *minimalMetricsRequest;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 obstructionTopMargin:(double)a1 expandedMetricsRequest:(id)a2 compactLeadingMetricsRequest:(id)a3 compactTrailingMetricsRequest:(id)a4 minimalMetricsRequest:(id)a5;
- (id)_initWithMetricsRequest:(id)a0;
- (id)_systemApertureMetricsRequest;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 expandedMetricsRequest:(id)a1 compactLeadingMetricsRequest:(id)a2 compactTrailingMetricsRequest:(id)a3 minimalMetricsRequest:(id)a4;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 expandedMetricsRequest:(id)a1 compactMetricsRequest:(id)a2 minimalMetricsRequest:(id)a3;

@end
