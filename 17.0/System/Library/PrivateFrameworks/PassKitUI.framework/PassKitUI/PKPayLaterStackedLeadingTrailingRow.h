@class NSString, UIColor;
@protocol NSCopying;

@interface PKPayLaterStackedLeadingTrailingRow : NSObject <PKPayLaterCollectionViewRow>

@property (copy, nonatomic) NSString *leadingPrimaryText;
@property (copy, nonatomic) NSString *leadingSecondaryText;
@property (copy, nonatomic) NSString *trailingPrimaryText;
@property (copy, nonatomic) NSString *trailingSecondaryText;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic) BOOL showProgressBar;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressBarStartColor;
@property (retain, nonatomic) UIColor *progressBarEndColor;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (id)initWithLeadingPrimaryText:(id)a0 leadingSecondaryText:(id)a1 trailingPrimaryText:(id)a2 trailingSecondaryText:(id)a3 detailText:(id)a4;

@end
