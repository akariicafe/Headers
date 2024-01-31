@class NSDictionary, NSString, UISystemNavigationAction;

@interface SBBreadcrumbActionContext : NSObject {
    BOOL _didCaptureContext;
    unsigned long long _lastSource;
    BOOL _wasFromSpotlight;
    BOOL _wasFromAssistant;
    NSDictionary *_appLinkState;
    NSString *_previousSideBundleId;
    NSString *_breadcrumbAppBundleID;
    NSString *_breadcrumbSceneID;
    NSString *_breadcrumbTitle;
    unsigned long long _analyticsType;
    UISystemNavigationAction *_action;
    NSDictionary *_destinationContexts;
    id /* block */ _responseHandler;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
