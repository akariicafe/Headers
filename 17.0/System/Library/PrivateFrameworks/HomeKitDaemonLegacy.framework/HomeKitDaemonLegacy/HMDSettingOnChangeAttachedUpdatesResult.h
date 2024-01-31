@class NSArray;

@interface HMDSettingOnChangeAttachedUpdatesResult : HMFObject

@property (readonly) NSArray *settingsToUpdate;
@property (readonly) NSArray *modelsToUpdate;
@property (readonly) id /* block */ onCommitCompletion;

- (void).cxx_destruct;
- (id)initWithSettingsToUpdate:(id)a0 models:(id)a1 onCommitCompletion:(id /* block */)a2;

@end
