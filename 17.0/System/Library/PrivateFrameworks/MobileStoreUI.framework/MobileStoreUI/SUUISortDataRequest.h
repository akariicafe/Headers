@class NSURL;
@protocol SUUISortDataRequestDelegate;

@interface SUUISortDataRequest : SUUIResourceRequest <NSCopying>

@property (readonly, nonatomic) NSURL *sortURL;
@property (weak, nonatomic) id<SUUISortDataRequestDelegate> delegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finishWithResource:(id)a0;
- (id)initWithSortURL:(id)a0;
- (id)newLoadOperation;

@end
