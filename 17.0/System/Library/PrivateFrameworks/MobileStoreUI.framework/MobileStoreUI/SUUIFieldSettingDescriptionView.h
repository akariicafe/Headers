@interface SUUIFieldSettingDescriptionView : SUUISettingDescriptionView

@property (nonatomic) BOOL enabled;

- (void)beginEdits;
- (void)commitEdits;

@end
