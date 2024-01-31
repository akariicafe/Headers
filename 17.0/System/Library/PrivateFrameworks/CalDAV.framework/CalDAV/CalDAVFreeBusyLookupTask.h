@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask

@property (retain, nonatomic) NSString *maskedUID;

+ (id)_freeBusyDocumentWithOrganizer:(id)a0 attendees:(id)a1 start:(id)a2 end:(id)a3 maskedUID:(id)a4 extendedFreeBusy:(BOOL)a5 prodID:(id)a6;
+ (id)_icsDate:(id)a0 calendar:(id)a1;

- (void).cxx_destruct;
- (id)initWithOrganizer:(id)a0 originator:(id)a1 attendees:(id)a2 start:(id)a3 end:(id)a4 outboxURL:(id)a5 maskedUID:(id)a6;
- (id)initWithOrganizer:(id)a0 originator:(id)a1 attendees:(id)a2 start:(id)a3 end:(id)a4 outboxURL:(id)a5 maskedUID:(id)a6 extendedFreeBusy:(BOOL)a7 prodID:(id)a8;

@end
