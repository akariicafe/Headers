@class NSArray, NSString;

@interface _SFSiriReaderPlaybackRateController : NSObject <_SFSettingsAlertOptionsGroupController> {
    float _playbackRate;
}

@property (readonly, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedStringForValue:(id)a0;
- (BOOL)isSelectedValue:(id)a0;
- (void)prepareItem:(id)a0 forValue:(id)a1;
- (void)setSelectedValue:(id)a0;
- (id)textStyleForValue:(id)a0;

@end
