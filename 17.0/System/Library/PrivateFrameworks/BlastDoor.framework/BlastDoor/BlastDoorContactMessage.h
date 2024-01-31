@class NSString, BlastDoorContactMessage_ContactInfo;

@interface BlastDoorContactMessage : NSObject {
    void /* unknown type, empty encoding */ contactMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorContactMessage_ContactInfo *contactInfo;

- (id)init;
- (void).cxx_destruct;

@end
