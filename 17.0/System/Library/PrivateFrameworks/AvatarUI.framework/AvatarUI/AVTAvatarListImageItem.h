@class UIImage, NSString;

@interface AVTAvatarListImageItem : NSObject <AVTAvatarListItem>

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithImage:(id)a0 title:(id)a1;
- (void)downcastWithRecordHandler:(id /* block */)a0 imageHandler:(id /* block */)a1 viewHandler:(id /* block */)a2;
- (void)downcastWithRecordHandler:(id /* block */)a0 viewHandler:(id /* block */)a1;

@end
