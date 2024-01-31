@class NSArray, NSString, NSDate, NSObject, _SYSharedServiceDB;
@protocol OS_dispatch_queue;

@interface NMSWindowData : NSObject {
    NSString *_path;
    struct __CFString { } *_loggingFacility;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 { } *_db;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3_stmt { } *_addMessageInFlight;
    struct sqlite3_stmt { } *_getMessageLength;
    struct sqlite3_stmt { } *_removeMessageInFlight;
    struct sqlite3_stmt { } *_getNextExpireDate;
    struct sqlite3_stmt { } *_getExpiredMessageIDs;
    struct sqlite3_stmt { } *_getBytesInFlight;
    struct sqlite3_stmt { } *_getCountInFlight;
    struct sqlite3_stmt { } *_pushPendingMessage;
    struct sqlite3_stmt { } *_getPendingMessage;
    struct sqlite3_stmt { } *_popPendingMessage;
    struct sqlite3_stmt { } *_countPendingMessages;
}

@property (readonly, nonatomic) NSArray *expiredMessageIDs;
@property (readonly, nonatomic) unsigned long long lengthOfAllMessagesInFlight;
@property (readonly, nonatomic) unsigned long long countOfAllMessagesInFlight;
@property (readonly, nonatomic) NSDate *dateOfNextMessageExpiry;
@property (readonly, nonatomic) unsigned long long countOfPendingMessages;

- (void)_withDB:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeAllMessages;
- (void)_prepareStatements;
- (int)_getSchemaVersion;
- (id)initWithSharedDBForServiceName:(id)a0;
- (void)_ensureSchema;
- (BOOL)_openDBForceRecreate:(BOOL)a0;
- (BOOL)_syncTransaction:(BOOL)a0 block:(id /* block */)a1;
- (void)addMessageWithID:(id)a0 ofLength:(unsigned long long)a1 timeoutTime:(double)a2;
- (struct sqlite3 { } *)dbRef;
- (id)initWithPath:(id)a0 logFacility:(struct __CFString { } *)a1;
- (id)popPendingMessage;
- (void)pushPendingMessageData:(id)a0 timeToLive:(double)a1;
- (unsigned long long)removeAndReturnLengthOfMessageWithID:(id)a0;
- (unsigned long long)removeAndReturnLengthOfMessagesWithIDs:(id)a0;

@end
