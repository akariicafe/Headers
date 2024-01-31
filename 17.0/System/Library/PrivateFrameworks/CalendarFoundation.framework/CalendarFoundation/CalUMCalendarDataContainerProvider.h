@class NSString;

@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>

@property (class, readonly, nonatomic) CalUMCalendarDataContainerProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
