@class NSString, NSArray;

@interface AAFTapToRadarRequest : NSObject

@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertMessage;
@property (copy, nonatomic) NSString *alertDefaultButtonText;
@property (copy, nonatomic) NSString *alertCancelButtonText;
@property (copy, nonatomic) NSString *alertOtherButtonText;
@property (copy, nonatomic) id /* block */ alertOtherButtonAction;
@property (retain, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSString *componentVersion;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSString *radarDescription;
@property (retain, nonatomic) NSArray *keywordIDs;

- (void).cxx_destruct;
- (id)formattedKeywords;

@end
