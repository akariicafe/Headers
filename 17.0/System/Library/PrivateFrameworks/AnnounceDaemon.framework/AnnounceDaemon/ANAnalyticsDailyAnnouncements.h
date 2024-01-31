@class NSMutableDictionary;

@interface ANAnalyticsDailyAnnouncements : NSObject

@property (nonatomic) double lastAccess;
@property (retain, nonatomic) NSMutableDictionary *homes;

- (id)init;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)merge:(id)a0;
- (unsigned long long)announcementsCount;
- (BOOL)shouldReport;
- (unsigned long long)homesCount;
- (void)incrementCountInHome:(id)a0 group:(id)a1;
- (id)initWithLastAccess:(double)a0;

@end
