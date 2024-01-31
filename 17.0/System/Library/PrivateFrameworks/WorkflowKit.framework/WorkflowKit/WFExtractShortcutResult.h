@class NSDate, NSString, WFWorkflowRecord;

@interface WFExtractShortcutResult : NSObject

@property (readonly, nonatomic) WFWorkflowRecord *record;
@property (readonly, nonatomic) long long fileContentType;
@property (readonly, nonatomic) NSDate *sharedDate;
@property (readonly, copy, nonatomic) NSString *iCloudIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceApplicationIdentifier;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 fileContentType:(long long)a1 iCloudIdentifier:(id)a2 sourceApplicationIdentifier:(id)a3 sharedDate:(id)a4;
- (id)initWithRecord:(id)a0 fileContentType:(long long)a1 sourceApplicationIdentifier:(id)a2 sharedDate:(id)a3;

@end
