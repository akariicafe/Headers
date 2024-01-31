@class NSString;

@interface HKHRIrregularRhythmNotificationsBridgeFooter : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *linkText;
@property (readonly, copy, nonatomic) NSString *linkURL;

+ (id)footerWhenAFibHistoryIsEnabled;
+ (id)footerWhenRemotelyDisabled;
+ (id)footerWhenSeedHasExpired;
+ (id)footerWhenUnavailableInOnboardedCountry;
+ (id)standardFooter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0 linkText:(id)a1 linkURL:(id)a2;

@end
