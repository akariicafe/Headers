@interface MKTransitSectionPagingFilter : NSObject

@property (nonatomic) BOOL limitNumLines;
@property (nonatomic) unsigned long long numLinesFallbackThreshold;
@property (nonatomic) unsigned long long numLinesFallbackValue;

+ (unsigned long long)_kMaxLinesInSectionBeforePage;
+ (unsigned long long)_kNumLinesFallbackValue;
+ (id)defaultFilterForDepartures;
+ (id)defaultFilterForInactiveLines;

@end
