@class NPNotePreviewProviderInternal;

@interface NPNotePreviewProvider : NSObject

@property (class, readonly, nonatomic) NPNotePreviewProvider *shared;

@property (retain, nonatomic) NPNotePreviewProviderInternal *notePreviewProvider;

- (void).cxx_destruct;
- (id)initWithNotePreviewProvider:(id)a0;
- (id)previewForUserActivity:(id)a0 error:(id *)a1;

@end
