@class NSString, ICQInAppAction;

@interface DOCICloudQuotaInAppAction : NSObject

@property (readonly, nonatomic) ICQInAppAction *action;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *type;

- (void)performAction;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 type:(id)a1;
- (id)initWithICQInAppAction:(id)a0;

@end
