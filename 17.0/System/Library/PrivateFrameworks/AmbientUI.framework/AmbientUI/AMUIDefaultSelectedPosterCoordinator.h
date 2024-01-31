@class AMUILastSelectedPosterStore, AMAmbientDefaults, NSString, PRSPosterConfiguration;
@protocol AMUIPosterSelectionCoordinatingDelegate;

@interface AMUIDefaultSelectedPosterCoordinator : NSObject <AMUIPosterSelectionCoordinating> {
    PRSPosterConfiguration *_lastSelectedPosterConfiguration;
    AMUILastSelectedPosterStore *_lastSelectedPosterStore;
}

@property (retain, nonatomic) AMAmbientDefaults *ambientDefaults;
@property (weak, nonatomic) id<AMUIPosterSelectionCoordinatingDelegate> delegate;
@property (readonly, nonatomic) PRSPosterConfiguration *lastSelectedPosterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
