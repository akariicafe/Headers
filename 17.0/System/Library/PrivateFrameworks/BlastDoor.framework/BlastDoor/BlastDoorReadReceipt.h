@class NSString, BlastDoorMetadata;

@interface BlastDoorReadReceipt : NSObject {
    void /* unknown type, empty encoding */ readReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
