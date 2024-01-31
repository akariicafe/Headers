@class NSDictionary, NSNumber;

@interface SFAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDictionary *record;
@property (readonly, nonatomic) NSNumber *timestamp;

- (void).cxx_destruct;
- (id)initFromRow:(id)a0;

@end
