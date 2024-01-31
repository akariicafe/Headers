@class STStatusItemsManager;

@interface STStatusItemsStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STStatusItemsManager *_statusItemsManager;
}

- (id)transformedDataForData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStatusItemsManager:(id)a0;

@end
