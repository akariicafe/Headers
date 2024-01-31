@class FUFlightLeg, FUFlight, FUSeparator, FUStyleProvider, FULabel, NSLayoutConstraint, UIButton;
@protocol FUFlightInfoViewProtocol;

@interface FUFlightInfoView : UIView {
    unsigned long long _displayedLegId;
    FUStyleProvider *_styleProvider;
    BOOL _awake;
    BOOL _multiFlights;
    BOOL _spotlightMode;
}

@property (readonly, nonatomic) FUFlight *flight;
@property (readonly, nonatomic) FUFlightLeg *leg;
@property (weak, nonatomic) id<FUFlightInfoViewProtocol> delegate;
@property long long currentFocus;
@property (weak, nonatomic) FULabel *labelAirlineName;
@property (weak, nonatomic) FULabel *labelFlightCode;
@property (weak, nonatomic) FULabel *labelStatusTitle;
@property (weak, nonatomic) FULabel *labelStatus;
@property (weak, nonatomic) FULabel *labelDepartureCity;
@property (weak, nonatomic) FULabel *labelDepartureCode;
@property (weak, nonatomic) FULabel *labelDepartureInfo1;
@property (weak, nonatomic) FULabel *labelDepartureInfo2;
@property (weak, nonatomic) FULabel *labelArrivalCity;
@property (weak, nonatomic) FULabel *labelArrivalCode;
@property (weak, nonatomic) FULabel *labelArrivalInfo1;
@property (weak, nonatomic) FULabel *labelArrivalInfo2;
@property (weak, nonatomic) FULabel *labelDepartureTitle;
@property (weak, nonatomic) FULabel *labelDepartureDate;
@property (weak, nonatomic) FULabel *labelDepartureTime;
@property (weak, nonatomic) FULabel *labelDepartureDelay;
@property (weak, nonatomic) FULabel *labelArrivalTitle;
@property (weak, nonatomic) FULabel *labelArrivalDate;
@property (weak, nonatomic) FULabel *labelArrivalTime;
@property (weak, nonatomic) FULabel *labelArrivalDelay;
@property (weak, nonatomic) FULabel *labelDurationTitle;
@property (weak, nonatomic) FULabel *labelDurationValue;
@property (weak, nonatomic) FULabel *labelDurationComplete;
@property (weak, nonatomic) FULabel *labelBaggageClaimTitle;
@property (weak, nonatomic) FULabel *labelBaggageClaimValue;
@property (weak, nonatomic) FUSeparator *sep5;
@property (retain, nonatomic) NSLayoutConstraint *trailingSeparatorsInset;
@property (retain, nonatomic) NSLayoutConstraint *leadingInset;
@property (retain, nonatomic) NSLayoutConstraint *trailingInset;
@property (retain, nonatomic) NSLayoutConstraint *bottomMargin;
@property (retain, nonatomic) NSLayoutConstraint *departureDelayConstraint;
@property (retain, nonatomic) NSLayoutConstraint *departureTerminalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *departureGateConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalDelayConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalTerminalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalGateConstraint;
@property (weak, nonatomic) UIButton *flightButton;
@property (nonatomic) unsigned long long style;

+ (id)flightViewForStyle:(unsigned long long)a0 compact:(BOOL)a1;

- (void)tlk_updateForAppearance:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)didMoveToWindow;
- (double)standardTableCellContentInset;
- (void)updateDelayInfo;
- (void)addDateTimeAttributesToString:(id)a0 striked:(BOOL)a1 alignment:(long long)a2;
- (void)flightButtonTapped:(id)a0;
- (id)formattedDurationForDuration:(double)a0;
- (void)setFlight:(id)a0 legIndex:(unsigned long long)a1 multiFlights:(BOOL)a2 spotlightMode:(BOOL)a3;
- (void)setupLabelStylesWithStyle:(unsigned long long)a0;
- (void)updateAirlineInformation;
- (void)updateDateTimeForDeparture:(BOOL)a0;
- (void)updateFlightButtonIcon;
- (void)updateFlightDates;
- (void)updateFlightStatus;
- (void)updateFlightTerminalInfo;
- (void)updateForFollowupContent:(BOOL)a0;
- (void)updateLabelVisibility:(id)a0 constraint:(id)a1;
- (void)updateLocationInfo;
- (void)updateTimeLabel:(id)a0 constraint:(id)a1 withString:(id)a2;

@end
