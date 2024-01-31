@class NSArray;
@protocol MUPlaceSectionControllerDelegate;

@interface MUEVChargingSectionController : MUPlaceSectionController {
    void /* unknown type, empty encoding */ _sectionViews;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic) BOOL active;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, readonly) BOOL isImpressionable;
@property (nonatomic, readonly) int analyticsModuleType;
@property (nonatomic, retain) id<MUPlaceSectionControllerDelegate> delegate;

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)initWithMapItem:(id)a0 availabilityProvider:(id)a1;

@end
