@class NSString, NSObject;
@protocol OS_os_log;

@interface EDSmartSortSuggestionsInterface : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)salientSendersForField:(long long)a0 minCount:(unsigned long long)a1 minScore:(double)a2 limit:(unsigned long long)a3;
+ (id)topSalienciesForMailboxIDs:(id)a0 limit:(long long)a1 error:(id *)a2;


@end
