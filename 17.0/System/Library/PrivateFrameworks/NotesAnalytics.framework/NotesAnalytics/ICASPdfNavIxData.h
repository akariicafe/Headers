@class NSString, NSNumber;

@interface ICASPdfNavIxData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *hasGestures;
@property (readonly, nonatomic) NSNumber *hasScroll;
@property (readonly, nonatomic) NSNumber *hasPagination;
@property (readonly, nonatomic) NSNumber *hasPinchZoom;
@property (readonly, nonatomic) NSNumber *hasPinchToExpandState;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithHasGestures:(id)a0 hasScroll:(id)a1 hasPagination:(id)a2 hasPinchZoom:(id)a3 hasPinchToExpandState:(id)a4;

@end
