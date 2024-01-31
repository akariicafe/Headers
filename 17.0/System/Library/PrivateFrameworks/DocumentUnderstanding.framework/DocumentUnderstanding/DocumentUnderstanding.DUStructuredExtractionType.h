@class NSString;

@interface DocumentUnderstanding.DUStructuredExtractionType : NSObject

@property (class, nonatomic, readonly) NSString *title;
@property (class, nonatomic, readonly) NSString *phone;
@property (class, nonatomic, readonly) NSString *url;
@property (class, nonatomic, readonly) NSString *address;
@property (class, nonatomic, readonly) NSString *calendarEvent;
@property (class, nonatomic, readonly) NSString *liveText;
@property (class, nonatomic, readonly) NSString *person;
@property (class, nonatomic, readonly) NSString *hmHome;
@property (class, nonatomic, readonly) NSString *hmRoom;
@property (class, nonatomic, readonly) NSString *hmAccessory;

- (id)init;
- (void).cxx_destruct;

@end
