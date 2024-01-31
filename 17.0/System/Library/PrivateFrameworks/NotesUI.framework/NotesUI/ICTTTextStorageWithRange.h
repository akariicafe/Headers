@class NSArray, ICNote, NSString, ICTTTextStorage, NSManagedObjectContext;

@interface ICTTTextStorageWithRange : NSObject <NSItemProviderWriting>

@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (retain, nonatomic) ICNote *note;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSManagedObjectContext *workerContext;
@property (retain, nonatomic) ICNote *workerContextNote;
@property (retain, nonatomic) ICTTTextStorage *textStorage;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)a0;
- (id)initWithTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 note:(id)a2;
- (void)prepareTextStorage;

@end
