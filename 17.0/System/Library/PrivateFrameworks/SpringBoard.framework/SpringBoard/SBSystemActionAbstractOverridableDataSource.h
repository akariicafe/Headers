@class NSString, NSMutableSet;

@interface SBSystemActionAbstractOverridableDataSource : SBSystemActionAbstractDataSource <SBSystemActionDataSourceOverridable> {
    NSMutableSet *_overriders;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
