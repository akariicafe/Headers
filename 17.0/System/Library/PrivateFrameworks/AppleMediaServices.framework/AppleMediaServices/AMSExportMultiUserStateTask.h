@class NSUUID;
@protocol AMSMultiUserServiceProtocol;

@interface AMSExportMultiUserStateTask : AMSTask

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) id<AMSMultiUserServiceProtocol> multiUserService;
@property (readonly, nonatomic) NSUUID *homeIdentifier;

- (void).cxx_destruct;
- (id)performTask;
- (id)initWithHomeIdentifier:(id)a0 options:(unsigned long long)a1;
- (id)initWithHomeIdentifier:(id)a0 options:(unsigned long long)a1 multiUserService:(id)a2;

@end
