@class PSSpecifier;

@interface STAllowPhotoRestrictionsController : PUIPhotosPrivacyController {
    PSSpecifier *_allowedGroup;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;

@end
