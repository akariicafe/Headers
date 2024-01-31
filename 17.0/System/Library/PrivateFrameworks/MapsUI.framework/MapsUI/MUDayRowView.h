@class NSString, MUDayRowViewModel, NSArray, UIView;
@protocol MULabelViewProtocol;

@interface MUDayRowView : UIView <MUStackable> {
    UIView<MULabelViewProtocol> *_headerLabel;
    UIView<MULabelViewProtocol> *_dayLabel;
    UIView<MULabelViewProtocol> *_hoursLabel;
    NSArray *_hoursConstraints;
}

@property (retain, nonatomic) MUDayRowViewModel *viewModel;
@property (nonatomic, getter=isStacked) BOOL stacked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_hoursMonospacedFont;

- (id)initWithViewModel:(id)a0;
- (void)_setupConstraints;
- (void)_updateFonts;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)_createHoursConstraints;
- (void)_refreshHoursLabel;
- (BOOL)shouldStackForProposedWidth:(double)a0;

@end
