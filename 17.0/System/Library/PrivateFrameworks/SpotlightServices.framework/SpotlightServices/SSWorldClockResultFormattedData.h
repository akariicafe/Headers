@class NSString, SFCommand, SFClockImage;

@interface SSWorldClockResultFormattedData : NSObject

@property (nonatomic) BOOL isCapital;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *time;
@property (retain, nonatomic) NSString *timeZoneDescription;
@property (retain, nonatomic) NSString *timeZoneAbbreviation;
@property (retain, nonatomic) NSString *timeZoneOffsetDescription;
@property (retain, nonatomic) NSString *timeAndTimeZoneOffsetDescription;
@property (retain, nonatomic) SFCommand *punchoutCommand;
@property (nonatomic) BOOL shouldEmphasizeTimeZone;
@property (retain, nonatomic) SFClockImage *clockImage;

- (void).cxx_destruct;

@end
