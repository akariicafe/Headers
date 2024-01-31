@class MAEdgeFilter, NSString;

@interface PGGraphMeaningEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *reliableFilter;
@property (class, readonly) MAEdgeFilter *highPrecisionFilter;

@property (readonly) double confidence;
@property (readonly) BOOL isReliable;
@property (readonly) unsigned char isHighPrecision : 1;
@property (readonly) NSString *meaningLabel;

+ (id)filter;
+ (id)label;
+ (unsigned short)domain;
+ (id)propertyDictionaryWithConfidence:(double)a0 isHighPrecision:(BOOL)a1;

- (id)label;
- (id)propertyDictionary;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toMeaningNode:(id)a1 confidence:(double)a2 isHighPrecision:(BOOL)a3;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
