@class NSString, NTKComplicationCollection, CLKComplicationTemplate, NTKCompanionAppLibrary, NTKSampleComplicationDataSource;

@interface NTKCompanionRemoteComplicationDataSource : NTKComplicationDataSource <NTKComplicationCollectionObserver, NTKCompanionAppLibraryObserver> {
    CLKComplicationTemplate *_complicationTemplate;
    NTKComplicationCollection *_complicationCollection;
    NTKSampleComplicationDataSource *_stocksDataSource;
    NTKCompanionAppLibrary *_appLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;

- (void)dealloc;
- (void)_activeDeviceChanged;
- (void)complicationCollectionDidLoad:(id)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_loadCollection;
- (void)_invalidateIfComplicationCorrespondsToApp:(id)a0;
- (BOOL)_remoteIsCompanion;
- (id)_templateFromApp:(id)a0;
- (void)appLibrary:(id)a0 didAddApp:(id)a1;
- (void)appLibrary:(id)a0 didUpdateApp:(id)a1;
- (void)complicationCollection:(id)a0 didRemoveSampleTemplatesForClient:(id)a1;
- (void)complicationCollection:(id)a0 didUpdateSampleTemplateForClient:(id)a1;
- (id)currentSwitcherTemplate;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;

@end
