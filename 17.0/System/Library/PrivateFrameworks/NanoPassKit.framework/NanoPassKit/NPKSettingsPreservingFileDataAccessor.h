@class NPKCompanionAgentConnection, NSString;

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor

@property (retain, nonatomic) NPKCompanionAgentConnection *connection;
@property (retain, nonatomic) NSString *objectUniqueID;

- (void)updateSettings:(unsigned long long)a0;
- (void).cxx_destruct;

@end
