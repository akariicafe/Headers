@class NSString, NSData, WFCoreDataWorkflow;

@interface WFCoreDataSmartPromptPermission : NSManagedObject

@property (copy, nonatomic) NSString *actionUUID;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;

@end
