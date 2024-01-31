@class NSString, PHFetchResult;

@interface PXPeopleDetailSettingsFaceDataSource : NSObject <PXPeopleDetailSettingsDataSource>

@property (retain, nonatomic) PHFetchResult *faces;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) BOOL hasMoreDetails;
@property (readonly, nonatomic) long long action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 resultHandler:(id /* block */)a3;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2;
- (id)initWithTitle:(id)a0 faces:(id)a1;
- (id)modelObjectForIndex:(long long)a0;

@end
