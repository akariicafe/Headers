@class NSString, PXPhotosViewModel, NSMutableDictionary, NSNumber;

@interface PXPhotosViewEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXPhotosViewEventTracker>

@property (class, readonly, nonatomic) double selectModeImpressionMinimumDuration;

@property (retain, nonatomic) NSNumber *isInSelectModeValue;
@property (readonly, nonatomic) double isInSelectModeValueTimestamp;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSMutableDictionary *payload;

+ (id)analyticsViewNameForDataSource:(id)a0;

@end
