@class NSString, LSApplicationProxy;

@interface _SFOpenWithAppUIActivity : UIActivity <LSOpenResourceOperationDelegate> {
    LSApplicationProxy *_appProxy;
    NSString *_filePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (id)_activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithApplicationIdentifier:(id)a0 andFilePath:(id)a1;

@end
