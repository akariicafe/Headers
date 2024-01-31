@class NSString, WFCoreDataWorkflow, NSDate;

@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (copy, nonatomic) NSDate *importDate;
@property (copy, nonatomic) NSString *sourceAppIdentifier;
@property (retain, nonatomic) WFCoreDataWorkflow *workflow;

+ (id)fetchRequest;

@end
