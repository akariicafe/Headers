@class DUCalendarEventObjC, NSString, NSArray, NSDictionary, DUDisplayInfoObjC, DUDebugInfoObjC, _TtC21DocumentUnderstanding18DUStructuredEntity;

@interface DUStructuredEntityObjC : NSObject {
    _TtC21DocumentUnderstanding18DUStructuredEntity *_underlying;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *labels;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *addressComponents;
@property (copy, nonatomic) DUCalendarEventObjC *calendarEvent;
@property (copy, nonatomic) NSString *homeAutomationID;
@property (copy, nonatomic) DUDisplayInfoObjC *displayInfo;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;

- (id)init;
- (void).cxx_destruct;

@end
