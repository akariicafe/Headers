@class NSString, NSMutableDictionary, NSNetService, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BorderAgentConnector : NSObject {
    struct shared_ptr<ot::commissioner::Commissioner> { struct Commissioner *__ptr_; struct __shared_weak_count *__cntrl_; } _commissioner;
    NSMutableDictionary *_notifiers;
    NSString *_name;
    unsigned long long _timeout;
    unsigned long long _baState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_commissioningTimer;
    id /* block */ _completionHandler;
}

@property (retain) NSNetService *netService;

+ (void)setLogLevel:(unsigned char)a0;
+ (unsigned char)commissionerLogToOSLevel:(unsigned char)a0;
+ (unsigned char)osLogToCommissionerLevel;
+ (void)setCommissioningTimeout:(unsigned long long)a0;

- (id)initWithNetService:(id)a0;
- (id)setDataSet:(unsigned long long)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)stateString;
- (void)commissionDevice:(id)a0 CC:(id)a1 completionHandler:(id /* block */)a2;
- (void)connectToBorderAgent:(id)a0 completion:(id /* block */)a1;
- (void)connectToBorderAgentWithPSKC:(id)a0 completion:(id /* block */)a1;
- (void)disconnectCommissioner;
- (id)initWithNetService:(id)a0 commissionerName:(id)a1 queue:(id)a2;
- (void)resignCommmissioner;
- (id)errorWithCode:(unsigned long long)a0 description:(id)a1 info:(id)a2;
- (id)commissionDevice:(id)a0 CC:(id)a1;
- (void)commissioningComplete:(id)a0;
- (id)connectToBorderAgent:(id)a0;
- (id)errorFromCode:(unsigned long long)a0;
- (id)errorFromCode:(unsigned long long)a0 extraInfo:(id)a1;
- (struct Config { BOOL x0; unsigned int x1; unsigned int x2; struct shared_ptr<ot::commissioner::Logger> { struct Logger *x0; struct __shared_weak_count *x1; } x3; BOOL x4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x5; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x6; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x7; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x8; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x9; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x10; })getConfig:(id)a0;
- (id)getIPAddress;
- (id)getPSKc:(id)a0;
- (id)initWithNetService:(id)a0 commissionerName:(id)a1;
- (BOOL)isCommissionerValid;
- (void)petition:(id /* block */)a0;
- (void)registerNotification:(id)a0 block:(id /* block */)a1;
- (void)setCommissioningTimeout:(unsigned long long)a0;
- (void)setJoinerInfo:(unsigned long long)a0 CC:(id)a1;
- (id)startCommissioning:(unsigned long long)a0;
- (void)startCommissioningTimer:(unsigned long long)a0;
- (void)stopCommissioningTimer;
- (void)unRegisterNotification:(id)a0;

@end
