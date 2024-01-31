@class NSString;

@interface MediaDownloadInstance : NSObject

@property (retain, nonatomic) NSString *originator;
@property (nonatomic) BOOL originatedInForeground;
@property (nonatomic) int downloadState;
@property (nonatomic) int resumeCount;

- (void).cxx_destruct;

@end
