@class NSObject, NSMutableArray, NSMutableSet;
@protocol OS_os_log;

@interface PGUpNextMemoriesAggregator : NSObject

@property (retain, nonatomic) NSMutableArray *acceptedMemories;
@property (readonly, nonatomic) NSMutableSet *keyAssetLocalIdentifiers;
@property (readonly, nonatomic) NSMutableSet *lowercaseTitles;
@property (readonly, nonatomic) BOOL gateOnUserFeedback;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (BOOL)addUpNextMemory:(id)a0 debugInfo:(id *)a1;
- (id)initWithLowercaseTitles:(id)a0 keyAssetLocalIdentifiers:(id)a1 gateOnUserFeedback:(BOOL)a2 loggingConnection:(id)a3;

@end
