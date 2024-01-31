@class NSString, BlastDoorMetadata;

@interface BlastDoorPlayedReceipt : NSObject {
    void /* unknown type, empty encoding */ playedReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
