@class WFFileType, NSArray, WFCoercionOptions;

@interface WFCoercionRequest : NSObject <NSCopying>

@property (readonly, nonatomic) id /* block */ contentItemsCompletionHandler;
@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) Class objectClass;
@property (readonly, nonatomic) id /* block */ objectRepresentationResultHandler;
@property (readonly, nonatomic) WFFileType *fileType;
@property (readonly, nonatomic) id /* block */ fileRepresentationResultHandler;
@property (readonly, nonatomic) NSArray *contentItemClasses;
@property (readonly, nonatomic) id /* block */ contentCollectionResultHandler;
@property (retain, nonatomic) WFCoercionOptions *options;

+ (id)requestForCoercingToContentClasses:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_requestForCoercingToContentClasses:(id)a0 itemCompletionHandler:(id /* block */)a1;
+ (id)requestForCoercingToFileType:(id)a0 completionHandler:(id /* block */)a1;
+ (id)requestForCoercingToObjectClass:(Class)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)completeContentItemCoercionRequestWithResultItems:(id)a0 originalItem:(id)a1 error:(id)a2;

@end
