@class NSString, NSArray, NSURL, NSDate, WBSSiriIntelligenceDonorPersonalizationData;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject

@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) NSString *userVisibleURLString;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *fullPageText;
@property (copy, nonatomic) NSString *readerText;
@property (copy, nonatomic) NSDate *lastVisitedDate;
@property (nonatomic) unsigned long long visitCount;
@property (copy, nonatomic) NSArray *autocompleteTriggers;
@property (retain, nonatomic) WBSSiriIntelligenceDonorPersonalizationData *personalizationData;
@property (copy, nonatomic) NSString *profileIdentifier;

- (void).cxx_destruct;

@end
