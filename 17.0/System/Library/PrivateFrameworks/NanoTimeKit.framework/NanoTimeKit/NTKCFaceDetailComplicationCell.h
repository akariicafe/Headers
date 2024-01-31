@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell

@property (readonly, nonatomic) NSString *slot;
@property (retain, nonatomic) NTKComplication *complication;
@property (readonly, nonatomic) BOOL dateSlot;
@property (readonly, nonatomic) BOOL isRichSlot;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL enabled;

+ (id)reuseIdentifier;

- (double)rowHeight;
- (void)_updateState;
- (void).cxx_destruct;
- (id)_activeColor;
- (id)_disabledColor;
- (id)_inactiveColor;
- (void)_updateLabelFonts;
- (id)_traitCollectionAdjustedIfNeeded;
- (void)_updateDetailText;
- (id)initWithSlot:(id)a0 dateSlot:(BOOL)a1 isRichSlot:(BOOL)a2 inFace:(id)a3;

@end
