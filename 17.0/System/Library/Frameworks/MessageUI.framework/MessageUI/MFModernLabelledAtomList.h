@class UIColor, NSArray, NSString, UILabel, NSMutableArray;
@protocol MFModernLabelledAtomListDelegate;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate> {
    void *_addressBook;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    BOOL _labelVisible;
    unsigned char _needsReflow : 1;
    double _previousWidth;
    UILabel *_lastBaselineDeceptionLabel;
}

@property (copy, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *labelTextColor;
@property (nonatomic, getter=isLabelVisible) BOOL labelVisible;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic) double lineSpacing;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (retain, nonatomic) NSArray *viewsToDodge;
@property (weak, nonatomic) id<MFModernLabelledAtomListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)primaryLabelFont;
+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;

- (id)viewForLastBaselineLayout;
- (void)dealloc;
- (void)setOpaque:(BOOL)a0;
- (id)viewForFirstBaselineLayout;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)passthroughViews;
- (void).cxx_destruct;
- (id)title;
- (void)layoutSubviews;
- (id)labelText;
- (void)_reflow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelFrame;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_setNeedsReflow;
- (void)_reflowIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForAtomAtIndex:(unsigned long long)a0 withStartingPoint:(struct CGPoint { double x0; double x1; })a1 row:(inout unsigned long long *)a2;
- (double)_remainingSpaceForRowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateLastAddressAtomIfNecessary;
- (void)addressAtom:(id)a0 displayStringDidChange:(id)a1;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)a0;
- (id)atomDisplayStrings;
- (struct CGPoint { double x0; double x1; })baselinePointForRow:(unsigned long long)a0;
- (void)crossFadeLabelVisibility:(BOOL)a0 atomSeparatorStyle:(int)a1 withAnimationCoordinator:(id)a2;
- (void)enumerateAddressAtomsUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 title:(id)a1 addressBook:(void *)a2;
- (void)setAddressAtomScale:(double)a0;
- (void)setAddressAtomSeparatorStyle:(int)a0;
- (void)setAddressAtomTarget:(id)a0 action:(SEL)a1;
- (void)setAddressAtomsArePrimary:(BOOL)a0;
- (void)setAddresses:(id)a0 withCompletion:(id /* block */)a1;
- (void)setAtomAlpha:(double)a0;
- (void)setOverrideFont:(id)a0;
- (void)updateAtomsForVIP;

@end
