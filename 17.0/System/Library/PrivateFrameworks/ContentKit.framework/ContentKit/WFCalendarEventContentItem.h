@class EKEvent, NSString, EKEventStore;

@interface WFCalendarEventContentItem : WFGenericFileContentItem

@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) EKEvent *event;
@property (readonly, nonatomic) NSString *location;

+ (id)typeDescription;
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)filterDescription;
+ (BOOL)hasLibrary;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)stringConversionBehavior;
+ (id)itemWithEKEvent:(id)a0 fromEventStore:(id)a1;
+ (id)dateByApplyingComponents:(id)a0 toDateComponents:(id)a1;
+ (id)icsCoercionHandler;
+ (id)mapItemCoercionHandler;
+ (id)mapsLinkCoercionHandler;
+ (id)participantsCoercionHandler;
+ (id)placemarkCoercionHandler;
+ (id)streetAddressCoercionHandler;

- (id)isCanceled;
- (id)color;
- (id)attachments;
- (id)structuredLocation;
- (id)myStatus;
- (void).cxx_destruct;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)changeTransaction;
- (void)copyStateToItem:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (void)getMapItemRepresentationIfPresent:(id /* block */)a0;

@end
