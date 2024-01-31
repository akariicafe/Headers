@class UTType, ATXTimeEventLocation, NSString, NSDate, ATXTimeGlyphPresentation, ATXTimeContext, NSArray, ATXTimeEventSource, ATXTimeEventPresentation;

@interface ATXScheduledTimeEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) UTType *uniformType;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isGap;
@property (readonly, nonatomic) BOOL isPast;
@property (readonly, nonatomic) BOOL isAllDayEvent;
@property (readonly, nonatomic) long long fuzzyTime;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) long long relevanceTag;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ATXTimeEventSource *source;
@property (readonly, nonatomic) double etaMinutes;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *eventDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) ATXTimeEventPresentation *mediumPresentation;
@property (readonly, nonatomic) ATXTimeEventPresentation *smallPresentation;
@property (readonly, nonatomic) ATXTimeGlyphPresentation *glyphPresentation;
@property (readonly, nonatomic) ATXTimeEventLocation *sourceLocation;
@property (readonly, nonatomic) ATXTimeEventLocation *destinationLocation;
@property (readonly, nonatomic) ATXTimeContext *context;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSArray *feedbackOptions;
@property BOOL isCompleted;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomainIdentifier:(id)a0 identifier:(id)a1 eventDescription:(id)a2 startDate:(id)a3 endDate:(id)a4 priority:(long long)a5 source:(id)a6 relevanceTag:(long long)a7 fuzzyTime:(long long)a8 context:(id)a9 isGap:(BOOL)a10 isPast:(BOOL)a11 isAllDayEvent:(BOOL)a12 isCompleted:(BOOL)a13 etaMinutes:(double)a14 mediumPresentation:(id)a15 smallPresentation:(id)a16 glyphPresentation:(id)a17 sourceLocation:(id)a18 destinationLocation:(id)a19 actions:(id)a20 feedbackOptions:(id)a21;

@end
