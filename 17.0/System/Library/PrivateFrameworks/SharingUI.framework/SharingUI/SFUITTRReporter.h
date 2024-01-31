@class SFUITTRReport;

@interface SFUITTRReporter : NSObject

@property (readonly, nonatomic) SFUITTRReport *internalReport;

+ (id)reporterForPeopleSuggestions;

- (void)report;
- (void).cxx_destruct;
- (id)initWithReport:(id)a0;
- (id)_createSchemeURL;

@end
