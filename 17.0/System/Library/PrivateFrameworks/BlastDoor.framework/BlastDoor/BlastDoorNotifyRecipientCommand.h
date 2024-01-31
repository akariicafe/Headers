@class NSString, BlastDoorMetadata;

@interface BlastDoorNotifyRecipientCommand : NSObject {
    void /* unknown type, empty encoding */ notifyRecipientCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
