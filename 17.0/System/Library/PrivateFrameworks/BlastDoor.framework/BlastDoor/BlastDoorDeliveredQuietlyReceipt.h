@class NSString, BlastDoorMetadata;

@interface BlastDoorDeliveredQuietlyReceipt : NSObject {
    void /* unknown type, empty encoding */ deliveredQuietlyReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
