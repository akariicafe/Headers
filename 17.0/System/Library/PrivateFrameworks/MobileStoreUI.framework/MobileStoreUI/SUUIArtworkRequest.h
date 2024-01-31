@class NSString, SSVURLDataConsumer, NSURL;
@protocol SUUIArtworkRequestDelegate;

@interface SUUIArtworkRequest : SUUIResourceRequest <NSCopying>

@property (retain, nonatomic) SSVURLDataConsumer *dataConsumer;
@property (weak, nonatomic) id<SUUIArtworkRequestDelegate> delegate;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSURL *URL;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)cachesInMemory;
- (void)finishWithResource:(id)a0;
- (id)newLoadOperation;

@end
