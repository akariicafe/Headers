@class NSArray;

@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSArray *impressionIdentifiers;

- (id)init;
- (id)description;

@end
