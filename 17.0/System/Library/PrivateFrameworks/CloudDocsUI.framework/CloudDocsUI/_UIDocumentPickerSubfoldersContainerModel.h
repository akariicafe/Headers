@class NSString;

@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel {
    NSString *_containerID;
}

- (id)scopes;
- (id)displayTitle;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (id)_createObserver;
- (id)initWithPickableTypes:(id)a0 container:(id)a1;
- (BOOL)shouldShowTopLevelContainers;
- (void)startMonitoringChanges;

@end
