@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup

@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray *nestedGroupPrincipalURLs;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (void)_expandProperties;
- (void)_getChildProperties;
- (void)_getGroupMembershipForURL:(id)a0 state:(int)a1;
- (id)initWithAccountInfoProvider:(id)a0 principalURL:(id)a1 taskManager:(id)a2;

@end
