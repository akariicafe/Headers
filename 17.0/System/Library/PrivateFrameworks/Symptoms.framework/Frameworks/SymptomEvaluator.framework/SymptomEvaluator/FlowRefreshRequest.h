@class NSString;

@interface FlowRefreshRequest : NSObject

@property (nonatomic) long long reference;
@property (nonatomic) double preferredExpiry;
@property (nonatomic) double scheduledExpiry;
@property (nonatomic) double interval;
@property (nonatomic) double maxStale;
@property (nonatomic) double maxLate;
@property (retain, nonatomic) NSString *logAs;
@property (nonatomic) int preference;
@property (copy, nonatomic) id /* block */ callback;

- (id)description;
- (void).cxx_destruct;

@end
