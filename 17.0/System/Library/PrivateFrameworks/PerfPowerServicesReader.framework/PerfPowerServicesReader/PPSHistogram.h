@class NSArray;

@interface PPSHistogram : NSObject <NSCopying, NSSecureCoding> {
    struct unique_ptr<pps::Histogram_Internal, std::default_delete<pps::Histogram_Internal>> { struct __compressed_pair<pps::Histogram_Internal *, std::default_delete<pps::Histogram_Internal>> { struct Histogram_Internal *__value_; } __ptr_; } _histogramPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *dimensions;
@property (readonly, copy) NSArray *metrics;
@property (readonly) unsigned long long rank;
@property (readonly) unsigned long long size;

- (unsigned long long)sum:(BOOL)a0;
- (unsigned long long)hash;
- (void)reset;
- (id)JSONRepresentation;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (id)initWithHistogram:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDimensions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)recordSample:(id)a0;
- (id)counts:(BOOL)a0;
- (id)createArrayFromDimensionIdx:(unsigned long long)a0 withFlowBins:(BOOL)a1;
- (id)indicesFor:(id)a0;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 metricName:(id)a2;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 metricName:(id)a2 samples:(id)a3;
- (BOOL)isEqualToHistogram:(id)a0;

@end
