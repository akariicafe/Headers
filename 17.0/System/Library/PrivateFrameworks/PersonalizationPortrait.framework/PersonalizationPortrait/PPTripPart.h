@class NSArray, NSString, CLPlacemark, NSDate;

@interface PPTripPart : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *eventIdentifiers;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *startLocation;
@property (readonly, nonatomic) NSString *endLocation;
@property (retain, nonatomic) CLPlacemark *mainLocation;
@property (retain, nonatomic) NSString *fallbackLocationString;
@property (readonly, nonatomic) unsigned char tripMode;

+ (id)descriptionForTripMode:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)destinationString;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 eventIdentifiers:(id)a2 mode:(unsigned char)a3 location:(id)a4 fallbackLocationString:(id)a5;

@end
