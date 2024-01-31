@class NSString, NTKMonogramTimelineEntryModel;

@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource {
    NTKMonogramTimelineEntryModel *_currentEntry;
    NSString *_monogramText;
    BOOL _listeningForMonogramNotifications;
}

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)pause;
- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (id)_currentTimelineEntry;
- (void)_handleMonogramTextReload;
- (void)_reloadMonogramText;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (void)startListeningForMonogramNotifications;
- (void)stopListeningForMonogramNotifications;
- (BOOL)supportsTapAction;

@end
