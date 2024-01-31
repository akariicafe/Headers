@class NSString, NSMutableArray, NSMapTable;

@interface ICSharedListeningConnectionReport : NSObject <MSVQRConnectionReportProtocol>

@property (retain, nonatomic) NSMutableArray *topLevelEvents;
@property (retain, nonatomic) NSMapTable *allEvents;
@property (readonly, nonatomic) NSString *formattedReport;
@property (readonly, nonatomic) id analyticsPayload;
@property (copy, nonatomic) NSString *sharedListeningSessionIdentifier;
@property (copy, nonatomic) NSString *groupSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)endEvent:(id)a0;
- (void)endEvent:(id)a0 withError:(id)a1;
- (void)startEvent:(id)a0;
- (void)_addEvents:(id)a0 toReportString:(id)a1 eventLevel:(long long)a2;
- (void)startEvent:(id)a0 withParentEvent:(id)a1;

@end
