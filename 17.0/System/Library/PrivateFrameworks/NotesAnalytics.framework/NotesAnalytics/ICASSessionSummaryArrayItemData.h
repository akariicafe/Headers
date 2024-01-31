@class NSString, NSNumber, ICASSessionType;

@interface ICASSessionSummaryArrayItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASSessionType *sessionType;
@property (readonly, nonatomic) NSNumber *sessionDuration;
@property (readonly, nonatomic) NSNumber *sessionCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSessionType:(id)a0 sessionDuration:(id)a1 sessionCount:(id)a2;

@end
