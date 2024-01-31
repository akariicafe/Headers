@interface SUSReleaseNotesProcessor : NSObject

+ (id)sharedInstance;

- (id)normalizeHtmlReleaseNotes:(id)a0;
- (id)normalizeHtmlReleaseNotes:(id)a0 withAdditionalCSS:(id)a1;

@end
