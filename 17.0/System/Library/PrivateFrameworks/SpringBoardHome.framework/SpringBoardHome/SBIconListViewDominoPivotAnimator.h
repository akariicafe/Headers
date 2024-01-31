@class NSString, SBIcon, SBHIconEditingSettings;
@protocol SBIconListViewDominoPivotAnimatorDelegate;

@interface SBIconListViewDominoPivotAnimator : NSObject <SBIconListLayoutAnimating> {
    SBHIconEditingSettings *_iconEditingSettings;
}

@property (nonatomic) unsigned long long pivotIconIndex;
@property (readonly, nonatomic) SBIcon *pivotIcon;
@property (weak, nonatomic) id<SBIconListViewDominoPivotAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
