@class _PSPeopleSuggestionsMetricsItemInternal;

@interface PSPeopleSuggestionsMetricsItem : NSObject

@property (readonly) _PSPeopleSuggestionsMetricsItemInternal *underlyingObject;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithId:(id)a0 model:(id)a1 transportBundleId:(id)a2 rank:(unsigned char)a3 score:(double)a4;
- (id)initWithId:(id)a0 modelIdentifier:(id)a1 transportBundleId:(id)a2 rank:(unsigned char)a3 score:(double)a4;

@end
