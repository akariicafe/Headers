@class IMSyndicationUtilities, NSString, SWHighlightCenter;

@interface IMSWHighlightCenterController : NSObject <SWHighlightCenterDelegate>

@property (readonly, nonatomic) IMSyndicationUtilities *utilities;
@property (readonly, nonatomic) SWHighlightCenter *highlightCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)sharedControllerWithAppIdentifier:(id)a0;

- (id)init;
- (id)initWithAppIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)fetchAttributionsForHighlight:(id)a0;
- (id)collaborationHighlightForURL:(id)a0 error:(id *)a1;
- (void)highlightCenterHighlightsDidChange:(id)a0;
- (void)fetchAttributionsForHighlight:(id)a0 completionHandler:(id /* block */)a1;

@end
