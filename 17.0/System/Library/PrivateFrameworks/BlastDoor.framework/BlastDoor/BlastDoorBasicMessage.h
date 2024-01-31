@class NSString, NSAttributedString, NSArray;

@interface BlastDoorBasicMessage : NSObject {
    void /* unknown type, empty encoding */ basicMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (id)init;
- (void).cxx_destruct;

@end
