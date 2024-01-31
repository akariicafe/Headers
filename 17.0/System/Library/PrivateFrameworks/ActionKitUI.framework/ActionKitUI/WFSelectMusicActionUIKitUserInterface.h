@class NSString;

@interface WFSelectMusicActionUIKitUserInterface : WFEmbeddableActionUserInterface <MPMediaPickerControllerDelegate, WFSelectMusicActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)mediaPicker:(id)a0 didPickMediaItems:(id)a1;
- (void)mediaPickerDidCancel:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithOutput:(id)a0 error:(id)a1;
- (void)showWithSelectMultiple:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
