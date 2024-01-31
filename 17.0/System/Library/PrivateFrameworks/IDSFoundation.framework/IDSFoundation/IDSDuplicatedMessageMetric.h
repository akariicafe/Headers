@class NSDictionary, NSString;

@interface IDSDuplicatedMessageMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
