@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSURL *clipURL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)item;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;

@end
