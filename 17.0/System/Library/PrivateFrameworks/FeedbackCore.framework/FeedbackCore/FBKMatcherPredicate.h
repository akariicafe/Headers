@class NSString, FBKFileMatcher, FBKFilePredicate, NSDateComponentsFormatter;

@interface FBKMatcherPredicate : NSObject

@property (class, nonatomic, readonly) NSDateComponentsFormatter *shortestDateFormatter;
@property (class, nonatomic, readonly) NSDateComponentsFormatter *shortDateFormatter;

@property (readonly, nonatomic) NSString *localizedWhenItWillGather;
@property (nonatomic, readonly) NSString *localizedDataCollectedSummary;
@property (nonatomic, readonly) NSString *localizedDataCollectedExplanation;
@property (nonatomic, readonly) BOOL hasCachedLocalizedDataFromExtension;
@property (nonatomic, readonly) BOOL requiresRemote;
@property (nonatomic, readonly) BOOL isConfiguredWithDEBundleIdentifier;
@property (nonatomic, readonly) BOOL hasRegularExpression;
@property (nonatomic, readonly) NSString *deBundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) BOOL shouldAutoGather;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) NSString *hashingKey;
@property (nonatomic, readonly) long long hash;
@property (retain, nonatomic) FBKFileMatcher *fileMatcher;
@property (retain, nonatomic) FBKFilePredicate *filePredicate;
@property (nonatomic) BOOL isAdditional;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)collectsSameDiagnosticsAsOtherMatcher:(id)a0;
- (id)initWithFileMatcher:(id)a0 filePredicate:(id)a1;

@end
