@class ATXHeuristicDevice;

@interface ATXWidgetMetadataDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void)fetchWidgetMetadataForAppBundleIds:(id)a0 callback:(id /* block */)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
