@interface CFPrefsPlistSource : CFPrefsSource {
    struct __CFString { } *userIdentifier;
    struct __CFString { } *domainIdentifier;
    struct __CFString { } *container;
    _Atomic struct __CFDictionary *_locallySetDict;
    _Atomic char *accessPath;
    _Atomic BOOL _isByHost;
    _Atomic BOOL _volatile;
    _Atomic BOOL _readonly;
    _Atomic BOOL _avoidsDaemonCache;
    _Atomic BOOL _restrictedAccess;
    _Atomic BOOL _checkedInvalidHome;
    _Atomic BOOL _lastWriteFailed;
    _Atomic BOOL _observing;
    _Atomic BOOL _byteCountLimitExceeded;
    _Atomic BOOL _directMode;
    _Atomic BOOL _disableBackup;
    _Atomic int _fileProtectionClass;
}

- (struct __CFString { } *)container;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (struct __CFString { } *)userIdentifier;
- (void)dealloc;
- (void)alreadylocked_clearCache;
- (long long)alreadylocked_generationCount;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (BOOL)servedByUserSessionDaemon;
- (BOOL)isByHost;
- (id)initWithDomain:(struct __CFString { } *)a0 user:(struct __CFString { } *)a1 byHost:(BOOL)a2 containerPath:(struct __CFString { } *)a3 containingPreferences:(id)a4;
- (long long)generationCount;
- (BOOL)isDirectModeEnabled;
- (struct __CFString { } *)domainIdentifier;
- (void)setAccessRestricted:(BOOL)a0;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (BOOL)isVolatile;
- (int)alreadylocked_updateObservingRemoteChanges;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (void)setBackupDisabled:(BOOL)a0;
- (BOOL)synchronize;
- (void)setFileProtectionClass:(int)a0;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (id)createSynchronizeMessage;

@end
