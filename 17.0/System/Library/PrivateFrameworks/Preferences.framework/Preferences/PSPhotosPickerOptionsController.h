@class NSString;

@interface PSPhotosPickerOptionsController : PSListController {
    NSString *_clientIdentifier;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_formatSetting;
- (id)_metadataSetting:(id)a0;
- (void)_setFormatSetting:(unsigned long long)a0;
- (void)_setMetadataSetting:(id)a0 specifier:(id)a1;

@end
