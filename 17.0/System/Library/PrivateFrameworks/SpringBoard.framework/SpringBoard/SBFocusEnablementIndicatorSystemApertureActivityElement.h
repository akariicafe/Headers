@class NSString, SBSystemActionElementPreviewingCoordinator;
@protocol SAElementHosting, SBSystemAperturePlatformElementHosting;

@interface SBFocusEnablementIndicatorSystemApertureActivityElement : FCUIFocusEnablementIndicatorSystemApertureActivityElement <SBSystemActionCoordinatedElementPreviewing, SBSystemActionElementPreviewing> {
    SBSystemActionElementPreviewingCoordinator *_previewingCoordinator;
    BOOL _previewing;
    BOOL _urgent;
    BOOL _expanding;
}

@property (readonly, nonatomic, getter=isPreviewing) BOOL previewing;
@property (readonly, nonatomic, getter=isUrgent) BOOL urgent;
@property (readonly, nonatomic, getter=isExpanding) BOOL expanding;
@property (readonly, nonatomic) long long layoutMode;
@property (weak, nonatomic) id<SBSystemAperturePlatformElementHosting> platformElementHost;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isProminent) BOOL prominent;

- (void)setExpanding:(BOOL)a0;
- (void).cxx_destruct;
- (void)pop;
- (void)setPreviewing:(BOOL)a0;
- (id)initWithActivityDescription:(id)a0 enabled:(BOOL)a1;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (void)setUrgent:(BOOL)a0;
- (long long)systemApertureLayoutCustomizingOptions;

@end
