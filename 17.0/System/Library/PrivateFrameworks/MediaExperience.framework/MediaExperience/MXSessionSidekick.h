@class MXCoreSessionSidekick, NSString;

@interface MXSessionSidekick : NSObject {
    MXCoreSessionSidekick *mCoreSession;
    unsigned long long mCoreSessionID;
    NSString *mDescription;
    int mClientType;
    BOOL mIsPlaying;
    unsigned long long mID;
}

+ (void)initialize;
+ (int)updateIsPlaying:(id)a0;

- (id)initWithSession:(id)a0;
- (int)setID:(unsigned long long)a0;
- (id)getClientTypeAsString;
- (void)dealloc;
- (BOOL)getIsPlaying;
- (id)getCoreSession;
- (int)setClientType:(int)a0;
- (id)copyProperties:(id)a0 outPropertyErrors:(id *)a1;
- (int)activate;
- (int)copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (void)dumpInfo;
- (int)setProperties:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (int)setIsPlaying:(BOOL)a0;
- (int)setPropertyForKey:(id)a0 value:(id)a1;
- (id)info;
- (int)getClientType;
- (int)setOrderedProperties:(id)a0 usingErrorHandlingStrategy:(unsigned char)a1 outPropertiesErrors:(id *)a2;
- (unsigned long long)getID;
- (int)deactivate:(BOOL)a0 postInterruptionNotification:(BOOL)a1;
- (unsigned long long)getCoreSessionID;

@end
