@class NSString, IKViewElement, NSHashTable, _TVPagePerformanceController;

@interface _TVPagePerformanceTemplateEntry : NSObject {
    NSHashTable *_initialOnScreenImageProxies;
    BOOL _listeningForImageProxyWillLoad;
    BOOL _listeningForImageProxyDidLoad;
}

@property (weak, nonatomic) IKViewElement *templateElement;
@property (copy, nonatomic) NSString *templateElementName;
@property (nonatomic) unsigned long long templateUpdateCount;
@property (nonatomic) unsigned long long templateWillRender;
@property (nonatomic) unsigned long long templateDidRender;
@property (nonatomic) unsigned long long templateWillTransition;
@property (nonatomic) unsigned long long templateDidTransition;
@property (nonatomic) unsigned long long templateWillLoadResources;
@property (nonatomic) unsigned long long templateDidLoadResources;
@property (nonatomic) unsigned long long templateWillLoadFirstImageProxy;
@property (nonatomic) unsigned long long templateDidLoadLastImageProxy;
@property (readonly, nonatomic) unsigned long long templateRenderDuration;
@property (readonly, nonatomic) unsigned long long templateResourcesDuration;
@property (readonly, nonatomic) unsigned long long templateTransitionDuration;
@property (weak, nonatomic) _TVPagePerformanceController *performanceController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_beginListeningForInitialImageProxyLoadNotifications;
- (void)_maybeStopListeningForInitialImageProxyLoadNotifications;
- (void)_receivedImageProxyDidLoadNotification:(id)a0;
- (void)_receivedImageProxyWillLoadNotification:(id)a0;
- (void)_stopListeningForInitialImageProxyLoadNotifications;
- (id)initWithPagePerformanceController:(id)a0 forTemplateElement:(id)a1;
- (void)markTemplateDidRender;
- (void)markTemplateDidTransition;
- (void)markTemplateWillRender;
- (void)markTemplateWillTransition;

@end
