@class NSArray, MPMediaLibraryView;

@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) Class modelClass;
@property (copy, nonatomic) NSArray *identifierSets;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (BOOL)supportsModelClass:(Class)a0;

- (void)execute;
- (void).cxx_destruct;

@end
