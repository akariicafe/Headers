@class NSString, NSArray;

@interface PLASMetric : NSObject

@property (retain) NSString *metricKey;
@property short metricType;
@property (retain) NSArray *metricProperties;
@property (copy) id /* block */ query;
@property (copy) id /* block */ summarizer;

- (void).cxx_destruct;
- (id)initMetric:(id)a0 withType:(short)a1 withProperties:(id)a2 withQuery:(id)a3 andSummarizerBlock:(id /* block */)a4;

@end
