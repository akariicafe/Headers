@class NSArray, NSString;

@interface PPSHistogramDimension : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *edges;
@property (readonly) unsigned long long extent;
@property (readonly) BOOL isCategoryDimension;
@property (readonly, copy) NSString *metricName;
@property (readonly) struct { double min; double max; } range;
@property (readonly) unsigned long long size;

- (unsigned long long)hash;
- (id)JSONRepresentation;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 metricName:(id)a2;
- (id)initWithCategories:(id)a0 metricName:(id)a1;
- (id)initWithEdges:(id)a0 metricName:(id)a1;
- (BOOL)isEqualToHistogramDimension:(id)a0;

@end
