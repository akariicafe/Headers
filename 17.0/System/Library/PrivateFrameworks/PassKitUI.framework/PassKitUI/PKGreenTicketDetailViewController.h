@class NSString, PKFelicaPassProperties;

@interface PKGreenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource>

@property (readonly, nonatomic) PKFelicaPassProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)numberOfLegs;
- (id)initWithFelicaProperty:(id)a0;
- (id)titleForLeg:(unsigned long long)a0;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)a0;
- (id)transitTicketDetailTitleForRow:(unsigned long long)a0 leg:(unsigned long long)a1;
- (id)transitTicketDetailValueForRow:(unsigned long long)a0 leg:(unsigned long long)a1;

@end
