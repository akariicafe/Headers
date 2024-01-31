@class PRSWallpaperObserver, NSString, NSArray, CSComplicationDescriptor, CHSWidgetHost, PRSWallpaperObserverState, NSDictionary, PRWidgetMetricsProvider, CHSWidgetDescriptorProvider, UIColor;
@protocol CSWidgetURLHandling, CSApplicationInforming;

@interface CSComplicationManager : NSObject <CSApplicationInformationObserving, CHSWidgetDescriptorProviderObserver> {
    PRSWallpaperObserver *_wallpaperObserver;
    PRSWallpaperObserverState *_wallpaperState;
    CHSWidgetHost *_widgetHost;
    CHSWidgetDescriptorProvider *_widgetDescriptorProvider;
    CSComplicationDescriptor *_inlineComplicationDescriptor;
    CSComplicationDescriptor *_landscapeInlineComplicationDescriptor;
    NSArray *_graphicComplicationDescriptors;
    NSArray *_sidebarComplicationDescriptors;
    NSDictionary *_sidebarIconLayout;
    UIColor *_tintColor;
    PRWidgetMetricsProvider *_widgetMetricsProvider;
    id<CSApplicationInforming> _applicationInformer;
    id<CSWidgetURLHandling> _urlHandler;
}

@property (copy, nonatomic) id /* block */ onInlineComplicationUpdate;
@property (copy, nonatomic) id /* block */ onWidgetUpdate;
@property (copy, nonatomic) id /* block */ onSidebarWidgetUpdate;
@property (copy, nonatomic) id /* block */ onSidebarIconLayoutUpdate;
@property (copy, nonatomic) id /* block */ onTintColorUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithApplicationInformer:(id)a0 urlHandler:(id)a1;
- (void)dealloc;
- (void)_openApplicationWithBundleIdentifier:(id)a0 action:(id)a1;
- (void)handleLaunchRequestForWidget:(id)a0 withAction:(id)a1;
- (void)_updateWidgetHostConfiguration;
- (void)_updateComplicationsForActivePosterConfiguration;
- (BOOL)_widgetHasMatchingSystemDescriptor:(id)a0;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void)_complicationDescriptorsForWidgets:(id)a0 completion:(id /* block */)a1;
- (void)applicationInformer:(id)a0 updatedApplications:(id)a1;
- (void).cxx_destruct;
- (void)_createComplicationDescriptorForWidget:(id)a0 withMetrics:(id)a1 completion:(id /* block */)a2;
- (id)_widgetMetricsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromMetrics:(id)a1;
- (BOOL)_bundleHasOpenURLEntitlement:(id)a0;

@end
