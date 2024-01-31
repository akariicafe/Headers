@class NSTimeZone, NSString, NSDate, CLLocation, PHAsset;

@interface PGShareBackSuggesterInput : NSObject <PGShareBackSuggesterInputProtocol>

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) PHAsset *asset;

+ (id)localDateIntervalForSuggesterInputs:(id)a0 withTimeIntervalPadding:(double)a1;
+ (id)suggesterInputsWithDictionaries:(id)a0;
+ (id)universalDateIntervalForSuggesterInputs:(id)a0 withTimeIntervalPadding:(double)a1;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
