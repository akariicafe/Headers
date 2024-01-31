@class NSString;

@interface SYDeletedObject : NSObject <SYChange>

@property (retain, nonatomic) NSString *syncId;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSyncId:(id)a0;
- (id)initWithObjectID:(id)a0 sequencer:(id)a1;

@end
