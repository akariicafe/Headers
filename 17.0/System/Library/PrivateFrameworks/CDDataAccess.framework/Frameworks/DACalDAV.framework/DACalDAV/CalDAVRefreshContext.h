@class NSError;

@interface CalDAVRefreshContext : NSObject

@property (nonatomic) BOOL isForced;
@property (nonatomic) BOOL wasUserRequested;
@property (nonatomic) BOOL wasDueToPush;
@property (nonatomic) BOOL isPrincipalOnly;
@property (nonatomic) BOOL isCalendarsOnly;
@property (nonatomic) BOOL didDownloadEvents;
@property (nonatomic) BOOL didSaveDatabase;
@property (nonatomic) BOOL shouldSave;
@property (nonatomic) BOOL shouldSaveAccounts;
@property (nonatomic) BOOL calendarFailedToSync;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long numDownloadedElements;
@property (nonatomic) unsigned long long numUploadedElements;
@property (nonatomic) BOOL shouldRetry;
@property (nonatomic) int retryTime;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long localItems;

+ (id)defaultContext;

- (void).cxx_destruct;

@end
