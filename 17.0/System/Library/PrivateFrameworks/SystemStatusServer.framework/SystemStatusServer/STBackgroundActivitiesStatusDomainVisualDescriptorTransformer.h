@class STBackgroundActivityManager;

@interface STBackgroundActivitiesStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STBackgroundActivityManager *_backgroundActivityManager;
}

- (id)transformedDataForData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBackgroundActivityManager:(id)a0;

@end
