@class NSString, NSData;

@interface WFDatabaseAccessResourceState : NSObject

@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) NSData *perWorkflowStateData;

- (void).cxx_destruct;
- (id)initWithPersistentIdentifier:(id)a0 perWorkflowStateData:(id)a1;

@end
