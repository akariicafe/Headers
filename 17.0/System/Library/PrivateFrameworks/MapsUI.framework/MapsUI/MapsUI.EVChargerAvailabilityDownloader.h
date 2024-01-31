@interface MapsUI.EVChargerAvailabilityDownloader : NSObject {
    void /* unknown type, empty encoding */ mapItemIdentifier;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ isDownloadInProgress;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ isActive;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMapItemIdentifier:(id)a0;

@end
