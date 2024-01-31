@class NSString, UIImage, NSOperationQueue;

@interface SUUIProfileSettingDescription : SUUISettingDescription {
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) UIImage *photo;

+ (Class)_viewClassForSettingDescription:(id)a0;

- (void)dealloc;
- (void)reloadData;
- (void).cxx_destruct;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;
- (id)initWithViewElement:(id)a0 parent:(id)a1;

@end
