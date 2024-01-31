@interface PLPrimaryResourceDataStoreKeyHelper : NSObject {
    char *originalsBaseData;
    char *rendersBaseData;
    char *derivativesBaseData;
    char *computeBaseData;
    char *masterThumbsBaseData;
    char *masterThumbFilenameData;
    char *bundleBaseData;
}

- (void)dealloc;
- (id)initWithPathManager:(id)a0;

@end
