@class NSString, SBExternalDisplayDefaults;
@protocol SBExtendedDisplayProfileFactoryDelegate;

@interface SBExtendedDisplayProfileFactory : NSObject <EXBDisplayProfileDelegate> {
    SBExternalDisplayDefaults *_defaults;
    id<SBExtendedDisplayProfileFactoryDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)displayProfile:(id)a0 initialDisplayConfigurationRequestForDisplay:(id)a1;
- (void)displayProfile:(id)a0 modifyInitialSceneParameters:(id)a1;
- (id)displayProfile:(id)a0 rootSceneWindowForDisplayConfiguration:(id)a1;
- (BOOL)displayProfile:(id)a0 shouldConnectToDisplay:(id)a1;

@end
