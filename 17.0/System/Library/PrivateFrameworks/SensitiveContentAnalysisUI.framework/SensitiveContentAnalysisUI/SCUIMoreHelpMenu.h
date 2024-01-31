@class NSString;
@protocol SCUIMoreHelpMenuDelegate;

@interface SCUIMoreHelpMenu : UIAlertController <SCUIMoreHelpMenuController>

@property (nonatomic) long long options;
@property (nonatomic) long long interventionType;
@property (weak, nonatomic) id<SCUIMoreHelpMenuDelegate> menuDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)menu;
+ (id)menuWithOptions:(long long)a0;
+ (id)menuWithOptions:(long long)a0 interventionType:(long long)a1;

- (void).cxx_destruct;
- (void)addActionsFromModel:(id)a0;
- (void)didMessageSomeoneDefaultImplementation;

@end
