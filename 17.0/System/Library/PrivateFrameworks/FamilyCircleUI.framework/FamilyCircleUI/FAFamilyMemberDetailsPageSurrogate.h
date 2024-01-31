@class NSString, FAFamilyMember, AAUIProfilePictureStore, NSObject, UITableView;
@protocol UITableViewDelegate;

@interface FAFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate> {
    NSObject<UITableViewDelegate> *_remoteTableViewController;
    UITableView *_remoteTableView;
    FAFamilyMember *_familyMember;
    AAUIProfilePictureStore *_pictureStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)initWithPage:(id)a0 forPerson:(id)a1 account:(id)a2 store:(id)a3;

@end
