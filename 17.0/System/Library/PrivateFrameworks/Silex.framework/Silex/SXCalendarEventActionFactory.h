@class NSString;
@protocol SXDateParser;

@interface SXCalendarEventActionFactory : NSObject <SXActionFactory>

@property (readonly, nonatomic) id<SXDateParser> dateParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)actionForAddition:(id)a0;
- (id)actionForStartDate:(id)a0 endDate:(id)a1;
- (id)actionForURL:(id)a0;
- (id)initWithDateParser:(id)a0;

@end
