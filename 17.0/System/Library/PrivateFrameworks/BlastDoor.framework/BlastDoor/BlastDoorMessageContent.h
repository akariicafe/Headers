@class NSString, NSAttributedString;

@interface BlastDoorMessageContent : NSObject {
    void /* unknown type, empty encoding */ messageContent;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;
@property (nonatomic, readonly) NSAttributedString *content;

- (id)init;
- (void).cxx_destruct;

@end
