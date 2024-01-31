@class PXPhotoKitPeopleSuggestionsDataSourceState, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotoKitPeopleSuggestionsDataSource : PXPeopleSuggestionsDataSource {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) PXPhotoKitPeopleSuggestionsDataSourceState *_state;

- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithState:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
