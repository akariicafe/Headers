@class CNContactStore, NSNotificationCenter, NSArray;
@protocol CNMeContactComparisonStrategy, CNReaderWriterScheduler, CNCancelable;

@interface CNUIMeContactMonitor : NSObject

@property (retain, nonatomic) id<CNMeContactComparisonStrategy> strategy;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) id<CNReaderWriterScheduler> lock;
@property (retain, nonatomic) id<CNCancelable> meNotificationToken;
@property (readonly, nonatomic) NSArray *meContactIdentifiers;

+ (id)unifiedMeContactMonitor;
+ (id)makeMeContactMonitor;
+ (id)makeUnifiedMeContactMonitor;
+ (id)meContactMonitor;

- (id)init;
- (void)dealloc;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (void)startMonitoring;
- (BOOL)isMeContact:(id)a0;
- (id)initWithComparisonStrategy:(id)a0;
- (id)initWithComparisonStrategy:(id)a0 contactStore:(id)a1;
- (id)initWithComparisonStrategy:(id)a0 contactStore:(id)a1 notificationCenter:(id)a2 schedulerProvider:(id)a3;
- (void)meChanged:(id)a0;

@end
