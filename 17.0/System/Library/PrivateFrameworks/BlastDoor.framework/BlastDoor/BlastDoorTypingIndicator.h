@class NSString, BlastDoorTypingIndicator_Icon, NSArray;

@interface BlastDoorTypingIndicator : NSObject {
    void /* unknown type, empty encoding */ typingIndicator;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isFinished;
@property (nonatomic, readonly) BlastDoorTypingIndicator_Icon *icon;
@property (nonatomic, readonly) NSString *balloonPluginBundleID;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (id)init;
- (void).cxx_destruct;

@end
