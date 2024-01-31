@class NSMapTable, SBWindowSceneManager;

@interface SBDisplayPortalManager : NSObject {
    NSMapTable *_sourceViewToPortalWindowsMap;
}

@property (readonly, nonatomic) SBWindowSceneManager *windowSceneManager;

- (void).cxx_destruct;
- (id)_createPortalForSourceView:(id)a0 sourceWindowScene:(id)a1 targetWindowScene:(id)a2 traitsRole:(id)a3;
- (void)createPortalsForSourceView:(id)a0 usingTraitsRole:(id)a1;
- (void)destroyPortalsForSourceView:(id)a0;
- (id)initWithWindowSceneManager:(id)a0;

@end
