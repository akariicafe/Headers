@class NSString, SBSystemAction;
@protocol SBSystemActionDataSource;

@interface SBSystemActionDataSourceWithDefaultAction : NSObject <SBSystemActionDataSource> {
    id<SBSystemActionDataSource> _innerDataSource;
    SBSystemAction *_defaultAction;
}

@property (readonly, nonatomic) SBSystemAction *selectedSystemAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
