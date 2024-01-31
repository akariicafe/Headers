@class NSString, UIView;

@interface AVTAvatarListViewItem : NSObject <AVTAvatarListItem>

@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)downcastWithRecordHandler:(id /* block */)a0 imageHandler:(id /* block */)a1 viewHandler:(id /* block */)a2;
- (void)downcastWithRecordHandler:(id /* block */)a0 viewHandler:(id /* block */)a1;

@end
