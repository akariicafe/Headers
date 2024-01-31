@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {
    NSNumber *_sizeInBytes;
}

- (void)dealloc;
- (id)payload;
- (id)initWithContainerIdentifier:(id)a0;

@end
