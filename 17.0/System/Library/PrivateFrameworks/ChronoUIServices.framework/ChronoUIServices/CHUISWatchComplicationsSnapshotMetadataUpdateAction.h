@class NSArray, CHUISWatchComplicationsWidgetSnapshotMetadata;

@interface CHUISWatchComplicationsSnapshotMetadataUpdateAction : BSAction {
    NSArray *_urls;
}

@property (readonly, retain, nonatomic) CHUISWatchComplicationsWidgetSnapshotMetadata *metadata;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 completion:(id /* block */)a1;
- (id)initWithMetadata:(id)a0 directory:(id)a1 completion:(id /* block */)a2;

@end
