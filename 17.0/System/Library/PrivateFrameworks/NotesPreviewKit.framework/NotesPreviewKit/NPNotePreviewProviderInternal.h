@interface NPNotePreviewProviderInternal : NSObject {
    void /* unknown type, empty encoding */ cache;
}

@property (class, nonatomic, readonly) NPNotePreviewProviderInternal *shared;

- (id)init;
- (void).cxx_destruct;
- (id)previewForUserActivity:(id)a0 error:(id *)a1;

@end
