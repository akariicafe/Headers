@class UIMenuElement, NSArray;

@interface MKPlaceCardMenuBuildingOptions : NSObject

@property (retain, nonatomic) UIMenuElement *headerMenuElement;
@property (readonly, copy, nonatomic) NSArray *requestedActionTypes;
@property (nonatomic) BOOL addMismatchedItems;

- (void).cxx_destruct;
- (id)initWithRequestedActionTypes:(id)a0;

@end
