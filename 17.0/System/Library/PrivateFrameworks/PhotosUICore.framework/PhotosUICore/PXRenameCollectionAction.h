@class NSString, PHCollection;

@interface PXRenameCollectionAction : PXPhotosAction

@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) unsigned long long collectionType;
@property (readonly, copy, nonatomic) NSString *redoTitle;
@property (readonly, copy, nonatomic) NSString *undoTitle;
@property (copy, nonatomic) NSString *currentTitle;

+ (id)_actionNameLocalizationKeyForCollectionType:(unsigned long long)a0;
+ (unsigned long long)_renameTypeForCollection:(id)a0;
+ (id)actionNameForCollection:(id)a0;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_changeTitle:(id)a0 completionHandler:(id /* block */)a1;
- (id)actionNameLocalizationKey;
- (id)initWithCollection:(id)a0 title:(id)a1;
- (void)performUndo:(id /* block */)a0;

@end
