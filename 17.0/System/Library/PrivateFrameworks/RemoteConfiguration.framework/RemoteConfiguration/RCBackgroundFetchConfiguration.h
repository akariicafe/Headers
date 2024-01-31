@class NSString, NSDate;

@interface RCBackgroundFetchConfiguration : NSObject

@property (retain, nonatomic) NSString *taskIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSString *sharedContainerIdentifier;
@property (retain, nonatomic) NSDate *earliestBeginDate;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)initWithTaskIdentifier:(id)a0 sessionIdentifier:(id)a1 sharedContainerIdentifier:(id)a2 earliestBeginDate:(id)a3 timeout:(double)a4;

@end
