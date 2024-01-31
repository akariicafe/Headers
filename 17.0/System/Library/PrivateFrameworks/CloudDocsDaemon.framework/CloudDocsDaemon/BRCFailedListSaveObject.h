@class BRCPendingChangesStream;

@interface BRCFailedListSaveObject : NSObject

@property (readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream;
@property (readonly, nonatomic) id /* block */ serverTruthCallback;
@property (readonly, nonatomic) id /* block */ clientTruthCallback;

- (void).cxx_destruct;
- (id)initWithPendingChangesStream:(id)a0 serverTruthCallback:(id /* block */)a1 clientTruthCallback:(id /* block */)a2;

@end
