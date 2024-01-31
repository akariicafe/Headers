@class NSString, PXDataSectionManager;
@protocol PXDataSectionManagerEnabling;

@interface PXDataSectionEnablementForwarder : NSObject <PXDataSectionManagerChangeObserver>

@property (readonly, nonatomic) PXDataSectionManager *sourceDataSectionManager;
@property (weak, nonatomic) id<PXDataSectionManagerEnabling> enablementTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
