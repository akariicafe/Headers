@class NSString, NSArray, TRASettingsActuationContext;
@protocol TRAArbiterDrawingDataSource;

@interface TRAArbiterUpdateContext : NSObject <TRAArbiterUpdateContextBuilding, BSDescriptionProviding, TRASettingsActuationContextProviding>

@property (weak, nonatomic, setter=_setDrawingConfigurationProvider:) id<TRAArbiterDrawingDataSource> _drawingConfigProvider;
@property (readonly, nonatomic) BOOL _hasDefaultOrientationActuationContext;
@property (readonly, copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *requestingParticipantsUniqueIdentifiers;
@property (copy, nonatomic) TRASettingsActuationContext *userInterfaceStyleActuationContext;
@property (nonatomic) BOOL forceOrientationResolution;
@property (copy, nonatomic) TRASettingsActuationContext *orientationActuationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setReason:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)hasAnyActuationContext;

@end
