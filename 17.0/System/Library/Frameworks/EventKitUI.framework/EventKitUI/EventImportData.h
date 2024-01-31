@class NSString, NSURL, NSDate, NSData, EKStructuredLocation;

@interface EventImportData : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSData *icsData;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) int requestedAction;
@property (nonatomic) BOOL prefersManagedCalendar;

+ (id)acceptedTypeIdentifiers;
+ (id)_extractEventDataFromEventICSData:(id)a0;
+ (id)_extractEventDataFromMapKitItemData:(id)a0;
+ (id)_extractEventDataFromReminderICSData:(id)a0;
+ (id)_extractEventDataFromSpotlightIdentifier:(id)a0;
+ (id)_extractEventDataFromURL:(id)a0;
+ (id)_extractEventDataFromUTF8StringData:(id)a0;
+ (id)eventImportDataFromData:(id)a0 forType:(id)a1;
+ (void)extractEventImportDataFromDropSession:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)isSessionManaged:(id)a0;
+ (BOOL)itemContainsCalendarICSData:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
