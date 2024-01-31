@class NSUnit, NSArray, NSSet, NSMutableDictionary, MXMSample, MXMSampleTag, MXMSampleTimeSeries;

@interface MXMSampleSet : NSObject <NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MXMSample *min;
@property (readonly, nonatomic) MXMSample *max;
@property (readonly, nonatomic) MXMSample *distance;
@property (readonly, nonatomic) MXMSampleSet *range;
@property (readonly, nonatomic) MXMSample *geoMean;
@property (readonly, nonatomic) MXMSample *standardDeviation;
@property (readonly, nonatomic) MXMSample *relativeStandardDeviation;
@property (readonly, nonatomic) MXMSample *sum;
@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; } *index;
@property (nonatomic) void *underlyingBuffer;
@property (nonatomic) long long underlyingBufferLength;
@property (retain) NSArray *cachedSamples;
@property (readonly, nonatomic) NSMutableDictionary *attributesMap;
@property (readonly, copy) NSSet *attributes;
@property (readonly) double *doubleValues;
@property (readonly) double *firstDoubleValue;
@property (readonly) double *lastDoubleValue;
@property (readonly) MXMSampleTag *tag;
@property (readonly) NSUnit *unit;
@property (readonly, retain) MXMSampleTimeSeries *timeIndex;
@property (readonly, copy) NSArray *samples;
@property (readonly) unsigned long long length;

- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)copy;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_appendAttribute:(id)a0;
- (void)_appendDoubleValue:(double)a0 timestamp:(unsigned long long)a1;
- (void)_appendSample:(id)a0;
- (void)_appendSet:(id)a0;
- (void)_prepareUnderlyingBufferSizeWithAdditionalBytes:(unsigned long long)a0;
- (id)attributeWithName:(id)a0;
- (id)initWithTag:(id)a0 unit:(id)a1 attributes:(id)a2;
- (id)initWithTime:(id)a0 tag:(id)a1 unit:(id)a2 attributes:(id)a3;
- (id)initWithTime:(id)a0 tag:(id)a1 unit:(id)a2 attributes:(id)a3 doubleValues:(double *)a4 length:(unsigned long long)a5;
- (id)initWithTime:(id)a0 tag:(id)a1 unit:(id)a2 attributes:(id)a3 values:(void *)a4 length:(unsigned long long)a5 valueSize:(unsigned long long)a6;
- (id)sampleWithIndex:(unsigned long long)a0;

@end
