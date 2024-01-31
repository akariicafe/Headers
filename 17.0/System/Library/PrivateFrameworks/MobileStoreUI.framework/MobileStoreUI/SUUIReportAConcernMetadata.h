@class NSURL, SUUIReportAConcernReason, NSString;

@interface SUUIReportAConcernMetadata : NSObject

@property (copy, nonatomic) NSURL *reportConcernURL;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) SUUIReportAConcernReason *selectedReason;
@property (copy, nonatomic) NSString *details;

- (void).cxx_destruct;

@end
