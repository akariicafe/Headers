@class _TtC6MapsUI31EVChargerAvailabilityDownloader, NSString;
@protocol MUEVChargerAvailabilityDownloaderDelegate;

@interface MUEVChargerAvailabilityDownloader : NSObject <MapsUI.EVChargerAvailabilityDownloaderDelegate>

@property (retain, nonatomic) _TtC6MapsUI31EVChargerAvailabilityDownloader *downloader;
@property (weak, nonatomic) id<MUEVChargerAvailabilityDownloaderDelegate> delegate;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMapItemIdentifier:(id)a0;
- (void)didDownloadEVChargerAvailabilityWithEvCharger:(id)a0;

@end
