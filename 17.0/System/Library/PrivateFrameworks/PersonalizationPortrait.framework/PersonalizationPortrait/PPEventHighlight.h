@class NSString, NSArray, NSURL, NSDate;

@interface PPEventHighlight : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *eventIdentifier;
@property (retain, nonatomic) NSURL *externalURI;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *organizer;
@property (nonatomic) struct CGColor { } *calendarColor;
@property (nonatomic) unsigned long long prominentFeature;
@property (retain, nonatomic) NSArray *features;
@property (nonatomic) double score;
@property (nonatomic) BOOL isExtraordinary;

+ (id)eventHighlightWithEKEvent:(id)a0 score:(double)a1 prominentFeature:(unsigned long long)a2 features:(id)a3 isExtraordinary:(BOOL)a4;
+ (id)eventHighlightWithEvent:(id)a0 score:(double)a1 prominentFeature:(unsigned long long)a2 features:(id)a3 isExtraordinary:(BOOL)a4;
+ (id)describeProminentFeature:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventIdentifier:(id)a0 externalURI:(id)a1 title:(id)a2 startDate:(id)a3 endDate:(id)a4 location:(id)a5 organizer:(id)a6 calendarColor:(struct CGColor { } *)a7 prominentFeature:(unsigned long long)a8 features:(id)a9 score:(double)a10 isExtraordinary:(BOOL)a11;
- (BOOL)isEqualToEventHighlight:(id)a0;

@end
