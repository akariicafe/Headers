@class TTRIContentUnavailableConfiguration, TTRIContentUnavailableConfigurationState;

@interface TTRIContentUnavailableHostableViewController : UIViewController

@property (readonly, nonatomic) TTRIContentUnavailableConfigurationState *ttr_contentUnavailableConfigurationState;
@property (copy, nonatomic, setter=ttr_setContentUnavailableConfiguration:) TTRIContentUnavailableConfiguration *ttr_contentUnavailableConfiguration;

- (id)_contentUnavailableConfigurationState;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (id)_contentUnavailableConfiguration;
- (void)_setContentUnavailableConfiguration:(id)a0;
- (void)ttr_setNeedsUpdateContentUnavailableConfiguration;
- (void)ttr_updateContentUnavailableConfigurationUsingState:(id)a0;

@end
