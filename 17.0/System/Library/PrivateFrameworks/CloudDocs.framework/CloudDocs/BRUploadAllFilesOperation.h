@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {
    BRContainer *_container;
}

@property (copy) id /* block */ uploadAllFilesCompletion;

- (id)initWithContainer:(id)a0;
- (id)init;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
