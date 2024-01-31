@class NSArray, NSString;

@interface CalCompositeCalendarMigrationFailureRecorder : NSObject <CalCalendarMigrationFailureRecorder>

@property (readonly, nonatomic) NSArray *failureRecorders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
