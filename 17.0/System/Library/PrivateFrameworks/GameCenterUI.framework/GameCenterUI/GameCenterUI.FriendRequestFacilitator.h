@class NSArray, NSString, UIViewController;

@interface GameCenterUI.FriendRequestFacilitator : NSObject

+ (void)makeViewControllerForRemoteInviteWithRecipients:(id)a0 chatGUID:(id)a1 resultHandler:(id /* block */)a2;
+ (void)makeViewControllerWithRecipients:(NSArray *)a0 chatGUID:(NSString *)a1 completionHandler:(void (^)(UIViewController *))a2;

- (id)init;

@end
