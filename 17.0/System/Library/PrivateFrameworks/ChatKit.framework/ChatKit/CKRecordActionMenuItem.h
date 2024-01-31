@class NSDate;

@interface CKRecordActionMenuItem : CKActionMenuItem

@property (nonatomic) BOOL wasSelected;
@property (retain, nonatomic) NSDate *dateSelected;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateForState:(long long)a0 touchInside:(BOOL)a1;

@end
