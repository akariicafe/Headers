@class NSString;

@interface DOCTagPickerPanelAppearance : NSObject <DOCTagContainerAppearanceProviding>

@property (readonly, nonatomic) double topMargin;
@property (readonly, nonatomic) double bottomMargin;
@property (readonly, nonatomic) double maxHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTopMargin:(double)a0 bottomMargin:(double)a1 maxHeight:(double)a2;

@end
