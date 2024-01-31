@class NSString, NSArray, NSDictionary;

@interface DocumentUnderstanding.DUStructuredEntity : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ labels;
    void /* unknown type, empty encoding */ phoneNumber;
    void /* unknown type, empty encoding */ email;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ addressComponents;
    void /* unknown type, empty encoding */ homeAutomationID;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSArray *labels;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, retain) void /* unknown type, empty encoding */ calendarEvent;
@property (nonatomic, copy) NSString *homeAutomationID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ displayInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
