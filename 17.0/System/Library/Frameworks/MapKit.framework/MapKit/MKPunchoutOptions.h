@class NSURL, NSString;

@interface MKPunchoutOptions : NSObject

@property (copy, nonatomic) NSURL *urlToOpen;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic) long long strategy;

+ (id)punchoutOptionsForURLStrings:(id)a0 withAttribution:(id)a1;

- (void).cxx_destruct;

@end
