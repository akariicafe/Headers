@class NSString, NSArray;

@interface EDAMManageNotebookSharesParameters : FATObject

@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) NSArray *membershipsToUpdate;
@property (retain, nonatomic) NSArray *invitationsToCreateOrUpdate;
@property (retain, nonatomic) NSArray *unshares;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
