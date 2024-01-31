@class SFOpenMediaCommand;

@interface SearchUIOpenMediaHandler : SearchUIMediaHandler

@property (retain) SFOpenMediaCommand *command;

- (id /* block */)actionProvider;
- (id)intent;
- (id)mediaMetadata;
- (id)clientSelectedBundleIdentifier;
- (BOOL)supportsIntentPath;

@end
