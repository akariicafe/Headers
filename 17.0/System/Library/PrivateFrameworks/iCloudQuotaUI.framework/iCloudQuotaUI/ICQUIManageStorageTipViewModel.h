@class NSString, ICQImageURL, AMSUIMessageRequest, NSArray;

@interface ICQUIManageStorageTipViewModel : ICQUIInlineTipViewModel {
    NSString *_title;
    NSString *_subTitle;
    NSString *_systemIconName;
    NSString *_sectionID;
    NSString *_systemColor;
    ICQImageURL *_iconURL;
    NSArray *_actions;
}

@property (readonly, copy, nonatomic) AMSUIMessageRequest *request;

- (void).cxx_destruct;
- (id)initWithSectionAttributes:(id)a0 rows:(id)a1;
- (id)initWithTipInfo:(id)a0;

@end
