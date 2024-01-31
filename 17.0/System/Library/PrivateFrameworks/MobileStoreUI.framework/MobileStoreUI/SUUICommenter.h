@class NSString, UIImage;

@interface SUUICommenter : SUUIMediaSocialAuthor

@property (retain, nonatomic) NSString *attributedName;
@property (nonatomic) BOOL isAttributed;
@property (nonatomic) BOOL isMySelf;
@property (nonatomic) BOOL useImageCopy;
@property (copy, nonatomic) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (id)initWithAuthor:(id)a0;

@end
