@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CRSUIMutableTemplateDashboardWidgetSceneSettings : CRSUIMutableDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>

@property (copy, nonatomic) NSObject<OS_xpc_object> *templateEndpoint;
@property (copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, nonatomic) unsigned long long widgetStyle;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
