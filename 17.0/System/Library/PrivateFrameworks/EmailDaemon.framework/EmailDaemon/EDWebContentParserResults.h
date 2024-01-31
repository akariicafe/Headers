@class NSDictionary, NSArray, NSString;

@interface EDWebContentParserResults : NSObject

@property (copy, nonatomic) NSDictionary *dataDetectionResults;
@property (copy, nonatomic) NSArray *remoteContentLinks;
@property (copy, nonatomic) NSArray *richLinkResults;
@property (copy, nonatomic) NSString *oneTimeCode;

- (void).cxx_destruct;

@end
