@class IDSAccount, _IDSConnection;

@interface IDSConnection : NSObject {
    _IDSConnection *_internal;
}

@property (readonly, nonatomic) _IDSConnection *_internal;
@property (readonly, nonatomic) IDSAccount *account;
@property (readonly, nonatomic) BOOL isActive;

+ (id)_connectionWithAccount:(id)a0 commands:(id)a1 indirectDelegateCallouts:(BOOL)a2;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)initWithAccount:(id)a0;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (id)initWithAccount:(id)a0 commands:(id)a1;
- (BOOL)sendProtobuf:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0 toDestinations:(id)a1 options:(id)a2 identifier:(id *)a3 error:(id *)a4;
- (id)_initWithAccount:(id)a0 commands:(id)a1 indirectDelegateCallouts:(BOOL)a2;
- (BOOL)sendMessage:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (BOOL)sendData:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;

@end
