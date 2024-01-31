@class MPSectionedCollection, MPModelObject;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying>

@property (copy, nonatomic) MPModelObject *referralObject;
@property (copy, nonatomic) MPSectionedCollection *modelObjects;
@property (nonatomic) BOOL shouldLibraryAdd;

- (void)performWithResponseHandler:(id /* block */)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resultsWithCompletion:(id /* block */)a0;

@end
