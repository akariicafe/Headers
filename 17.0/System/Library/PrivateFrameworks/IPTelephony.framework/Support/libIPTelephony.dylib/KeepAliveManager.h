@class NSString, PCConnectionManager;

@interface KeepAliveManager : NSObject <PCConnectionManagerDelegate> {
    PCConnectionManager *_manager;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _keepAliveId;
    struct ImsKeepAliveDelegate { void /* function */ **x0; } *_delegate;
    BOOL _enableWakeUpOnWifi;
    BOOL _keepAliveStarted;
    struct __WiFiManagerClient { } *_wifiManagerRef;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectionManager:(id)a0 handleEvent:(int)a1;
- (void)growKeepAliveInterval;
- (id)initWithIdentifier:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a0 maxInterval:(double)a1 enableWakeUp:(BOOL)a2 delegate:(struct ImsKeepAliveDelegate { void /* function */ **x0; } *)a3;
- (void)shrinkKeepAliveInterval;
- (void)startKeepAlive;
- (void)startWakeUpOnWifi;
- (void)stopKeepAlive;
- (void)stopWakeUpOnWifi;

@end
