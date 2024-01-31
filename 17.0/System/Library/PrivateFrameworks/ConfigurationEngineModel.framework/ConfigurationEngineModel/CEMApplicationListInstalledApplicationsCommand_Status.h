@class NSSet, NSArray;

@interface CEMApplicationListInstalledApplicationsCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSArray *statusInstalledApplicationList;

+ (id)buildRequiredOnlyWithInstalledApplicationList:(id)a0;
+ (id)buildWithInstalledApplicationList:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
