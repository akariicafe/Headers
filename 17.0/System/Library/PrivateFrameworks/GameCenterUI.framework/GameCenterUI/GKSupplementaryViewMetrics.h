@class NSString;

@interface GKSupplementaryViewMetrics : NSObject <NSCopying>

@property (nonatomic) BOOL shouldUseGlobalIndexing;
@property (nonatomic) BOOL shouldPinGlobal;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } globalSectionRange;
@property (nonatomic) long long animateWithSection;
@property (nonatomic) double desiredWidth;
@property (nonatomic) double desiredHeight;
@property (nonatomic) BOOL shouldPin;
@property (retain, nonatomic) NSString *kind;
@property (nonatomic) Class reusableViewClass;
@property (nonatomic) SEL configurator;
@property (nonatomic) id target;
@property (nonatomic, getter=isHidden) BOOL hidden;

+ (id)supplementaryMetrics;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localDescription;
- (struct CGSize { double x0; double x1; })sizeForCollectionView:(id)a0;

@end
