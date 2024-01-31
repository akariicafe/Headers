@class NSDictionary, EKEventStore, NSDate, EKStructuredLocation, NSMutableArray;
@protocol EKTravelRouteEstimationControllerDelegate, EKStyleProvider;

@interface EKTravelRouteEstimationController : NSObject {
    EKEventStore *_eventStore;
    id<EKStyleProvider> _styleProvider;
    EKStructuredLocation *_originStructuredLocation;
    NSMutableArray *_rows;
}

@property (retain) EKStructuredLocation *evaluatedOriginLocation;
@property (retain) NSDictionary *travelTimeEstimatedValues;
@property (retain) NSDictionary *travelTimeLookupErrors;
@property BOOL isEstimating;
@property (weak, nonatomic) id<EKTravelRouteEstimationControllerDelegate> delegate;
@property (retain) NSDate *arrivalDate;
@property (retain, nonatomic) EKStructuredLocation *originStructuredLocation;
@property (retain) EKStructuredLocation *destinationStructuredLocation;
@property (readonly, nonatomic) unsigned long long numberOfOutputRows;

+ (id)_basedOnLocationLocalizedString;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginTravelTimeEstimationLookup;
- (void)_lookupTimedOut;
- (id)initWithDestinationStructuredLocation:(id)a0 styleProvider:(id)a1 eventStore:(id)a2;
- (void)_beginOriginLocationEstimationCoreRoutineLookup;
- (void)_beginOriginLocationEstimationEventKitLookup;
- (long long)_estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)a0;
- (id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)a0;
- (BOOL)_estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)a0;
- (double)_estimatedTravelTimeValueAtRowIndex:(unsigned long long)a0;
- (id)_imageForCellAtIndex:(unsigned long long)a0;
- (void)_originLocationEstimationCompletedCoreRoutineLookup;
- (void)_originLocationEstimationCompletedEventKitLookup;
- (id)_routingModeTypesAsEnum;
- (void)beginOriginLocationEstimationLookup;
- (long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)a0;
- (id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)a0;
- (BOOL)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)a0;
- (id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)a0 tableView:(id)a1;
- (double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)a0;

@end
