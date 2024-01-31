@interface SUSUIFakeSUDescriptor : SUDescriptor

- (unsigned long long)downloadSize;
- (id)publisher;
- (BOOL)isDownloadable;
- (id)productVersion;
- (int)updateType;
- (id)productBuildVersion;
- (id)documentation;
- (id)humanReadableUpdateName;
- (unsigned long long)preparationSize;
- (unsigned long long)installationSize;
- (id)productSystemName;
- (BOOL)isDownloadableOverCellular;

@end
