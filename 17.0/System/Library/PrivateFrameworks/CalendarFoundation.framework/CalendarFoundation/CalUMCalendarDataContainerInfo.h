@class NSString, NSURL;

@interface CalUMCalendarDataContainerInfo : NSObject <CalCalendarDataContainerInfo>

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *personaID;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) BOOL usesDataSeparatedContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_calendarGroupContainer;

- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (id)initWithPersonaID:(id)a0;

@end
