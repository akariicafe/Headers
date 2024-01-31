@class NSAttributedString;

@interface HKDisplayTypeSummaryAttribution : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSAttributedString *attribution;
@property (readonly, nonatomic) BOOL hasLink;
@property (readonly, nonatomic) BOOL primaryProfileOnly;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttribution:(id)a0 hasLink:(BOOL)a1 primaryProfileOnly:(BOOL)a2;
- (id)initWithAttribution:(id)a0 urlAttribute:(id)a1 iPadUrlAttribute:(id)a2 primaryProfileOnly:(BOOL)a3;
- (id)initWithAttribution:(id)a0 urlAttribute:(id)a1 primaryProfileOnly:(BOOL)a2;

@end
