@class NSString;

@interface HRSideBySideLabelCell : WDMedicalRecordGroupableCell {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ detail;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *detail;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;

@end
