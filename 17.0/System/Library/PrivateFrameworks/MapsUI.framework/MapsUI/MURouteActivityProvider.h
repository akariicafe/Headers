@class MKMapItem;

@interface MURouteActivityProvider : MUPlaceActivityProvider

@property (retain, nonatomic) MKMapItem *destinationMapItem;
@property (retain, nonatomic) MKMapItem *sourceMapItem;
@property (nonatomic) unsigned long long transportType;

- (void).cxx_destruct;
- (id)activitySourceTitle;
- (id)activityURL;
- (id)initWithSource:(id)a0 destination:(id)a1;

@end
