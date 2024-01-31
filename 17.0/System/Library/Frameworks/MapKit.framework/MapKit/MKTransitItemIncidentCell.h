@class NSString, MKTransitItemIncidentView;

@interface MKTransitItemIncidentCell : MKCustomSeparatorCell <MKTransitItemIncidentView> {
    MKTransitItemIncidentView *_incidentView;
}

@property (nonatomic) long long cellPosition;
@property (nonatomic) BOOL padBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorHidden:(BOOL)a0;
- (void)_updateIncidentViewBottomOffset;
- (void)_configureViews;
- (void)configureWithIncident:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithIncidentMessage:(id)a0 referenceDate:(id)a1 shouldShowImage:(BOOL)a2 inSiri:(BOOL)a3;
- (void)configureWithMessage:(id)a0 incident:(id)a1 referenceDate:(id)a2 shouldShowImage:(BOOL)a3 inSiri:(BOOL)a4;
- (void)setLeadingSeparatorInset:(double)a0;
- (void)setTrailingSeparatorInset:(double)a0;

@end
