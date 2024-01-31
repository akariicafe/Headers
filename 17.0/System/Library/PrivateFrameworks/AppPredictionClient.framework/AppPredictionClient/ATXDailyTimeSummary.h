@interface ATXDailyTimeSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double outdoors;
@property (nonatomic) double screen;
@property (nonatomic) double quality;
@property (nonatomic) double noMode;
@property (nonatomic) double dnd;
@property (nonatomic) double sleep;
@property (nonatomic) double driving;
@property (nonatomic) double exercise;
@property (nonatomic) double work;
@property (nonatomic) double personal;
@property (nonatomic) double reading;
@property (nonatomic) double gaming;
@property (nonatomic) double mindfulness;
@property (nonatomic) long long silencedNotificationCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
