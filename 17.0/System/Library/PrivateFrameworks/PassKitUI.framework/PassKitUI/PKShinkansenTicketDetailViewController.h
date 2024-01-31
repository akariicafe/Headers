@class NSString, NSMutableArray, PKFelicaPassProperties;

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource> {
    NSMutableArray *_train1Titles;
    NSMutableArray *_train2Titles;
    NSMutableArray *_train1Values;
    NSMutableArray *_train2Values;
}

@property (readonly, nonatomic) PKFelicaPassProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)numberOfLegs;
- (void)_prepareLabelsAndValues;
- (id)_transitTicketTitleForDetail:(unsigned long long)a0;
- (id)_transitTicketValueForDetail:(unsigned long long)a0 forSecondaryTrain:(BOOL)a1;
- (id)initWithFelicaProperty:(id)a0;
- (id)titleForLeg:(unsigned long long)a0;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)a0;
- (id)transitTicketDetailTitleForRow:(unsigned long long)a0 leg:(unsigned long long)a1;
- (id)transitTicketDetailValueForRow:(unsigned long long)a0 leg:(unsigned long long)a1;

@end
