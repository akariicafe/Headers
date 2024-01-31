@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem

@property (readonly, nonatomic) NSString *syncToken;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)_setSyncTokenItem:(id)a0;

@end
