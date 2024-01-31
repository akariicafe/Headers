@class NSString;

@interface SCUIMoreHelpContextMenuContainer : NSObject <SCUIMoreHelpMenuController>

@property (readonly, nonatomic) long long interventionType;
@property (readonly, nonatomic) long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(long long)a0 interventionType:(long long)a1;

@end
