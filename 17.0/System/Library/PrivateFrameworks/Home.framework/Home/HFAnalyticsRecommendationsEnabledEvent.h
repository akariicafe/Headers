@class NSString;

@interface HFAnalyticsRecommendationsEnabledEvent : HFAnalyticsEvent

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL success;
@property (nonatomic) double rank;
@property (nonatomic) int rankInt;
@property (nonatomic) int rankVersion;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSString *accessoryCategory;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *presentationContext;
@property (retain, nonatomic) NSString *configurationType;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
