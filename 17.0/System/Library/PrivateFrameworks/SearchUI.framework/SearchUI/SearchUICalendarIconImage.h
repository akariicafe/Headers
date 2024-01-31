@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage

@property (nonatomic) BOOL isCurrentDate;
@property (retain, nonatomic) NSDate *date;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithCurrentDateAndVariant:(unsigned long long)a0;
- (id)initWithDate:(id)a0 variant:(unsigned long long)a1;
- (void)invalidateAppIcon;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;

@end
