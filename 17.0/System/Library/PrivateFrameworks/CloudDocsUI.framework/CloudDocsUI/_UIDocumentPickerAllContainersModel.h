@class NSArray, BRContainer;

@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel {
    NSArray *_scopes;
    BRContainer *_sourceContainer;
}

- (id)scopes;
- (id)displayTitle;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (id)_createObserver;
- (id)initWithFoldersForPickableTypes:(id)a0 mode:(unsigned long long)a1 sourceContainer:(id)a2;
- (BOOL)shouldShowTopLevelContainers;
- (void)startMonitoringChanges;
- (void)updateScopes;

@end
