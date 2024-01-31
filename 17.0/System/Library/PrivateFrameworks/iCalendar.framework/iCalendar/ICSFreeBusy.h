@class NSArray, NSString, ICSDate, ICSDuration, ICSUserAddress;

@interface ICSFreeBusy : ICSComponent

@property (retain) NSArray *attendee;
@property (retain) ICSDate *created;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain, nonatomic) NSArray *freebusy;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain, nonatomic) NSString *x_calendarserver_mask_uid;
@property (retain, nonatomic) NSString *x_calendarserver_extended_freebusy;

+ (id)name;

@end
