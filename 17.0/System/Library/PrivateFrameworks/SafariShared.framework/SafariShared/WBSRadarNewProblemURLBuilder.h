@class NSString, NSArray, NSURL;

@interface WBSRadarNewProblemURLBuilder : NSObject

@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSString *componentVersion;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSArray *attachmentURLs;
@property (nonatomic) long long classification;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;

@end
