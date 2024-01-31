@class NSString, NSDictionary, HMDBackgroundOperationManager;

@interface HMDBackgroundOperationManagerDataSource : HMFObject

@property (class, readonly) NSString *name;

@property (readonly, weak) HMDBackgroundOperationManager *owner;
@property (readonly, copy) NSDictionary *values;

- (id)initWithOperationManager:(id)a0;
- (void).cxx_destruct;
- (void)notifyDataSourceChanged;

@end
