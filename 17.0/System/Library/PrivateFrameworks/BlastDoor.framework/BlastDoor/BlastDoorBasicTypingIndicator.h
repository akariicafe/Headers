@class NSString, NSArray;

@interface BlastDoorBasicTypingIndicator : NSObject {
    void /* unknown type, empty encoding */ basicTypingIndicator;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isFinished;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (id)init;
- (void).cxx_destruct;

@end
