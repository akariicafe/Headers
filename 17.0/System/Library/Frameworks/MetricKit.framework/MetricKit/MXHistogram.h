@class NSArray, NSEnumerator;

@interface MXHistogram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *histogramData;
@property (readonly) unsigned long long totalBucketCount;
@property (readonly) NSEnumerator *bucketEnumerator;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithHistogramBucketData:(id)a0;

@end
