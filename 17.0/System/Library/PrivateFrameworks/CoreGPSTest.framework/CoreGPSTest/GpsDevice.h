@interface GpsDevice : NSObject

@property void *fTestDevice;
@property struct Options { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } uartPortName; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } gnssDeviceLibraryName; unsigned int logLevel; unsigned int secondaryLogLevel; unsigned long long logMask; BOOL clearNvStore; BOOL printNmeaMessage; BOOL hostPassThroughMode; BOOL doPeriodic; BOOL doCw; BOOL doModulated; BOOL doRecordIQ; BOOL doPowerMode; BOOL doHostWakeGpio; BOOL doTimeMarkGpio; BOOL doCommPing; BOOL doCommLoopback; struct optional<int> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } bandLteFilter; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } l5NotchFilter; struct optional<GnssHal::ExtensionsFire::BlankingSetting> { union { char __null_state_; unsigned char __val_; } ; BOOL __engaged_; } blanking; int periodicDurationSec; int cwDurationSec; int cwBandwidthHz; int integrationTimeMilliseconds; unsigned char band; union Subband { int prn; int fcn; } subband; int modulatedDurationSec; int recordIQDurationSec; int powerMode; int hostWakeGpioTimeoutMs; int timeMarkGpioTimeoutMs; int commPingTimeoutMs; int commLoopbackTimeoutSec; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } extraOptions; int uartBaudRate; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } xmlFile; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } testJob; } fTestOptions;

- (id)init:(id *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)flushLogs;
- (BOOL)getGpsConfiguration:(struct { unsigned int x0; unsigned int x1; int x2; } *)a0 error:(id *)a1;
- (BOOL)testApSignalGpio:(id *)a0;
- (BOOL)testCommPing:(id)a0 error:(id *)a1;
- (BOOL)testCommPing:(id *)a0 id:(id *)a1 error:(id *)a2;
- (BOOL)testExternalFreqAssistance:(id *)a0;
- (BOOL)testGpsCw:(id)a0 error:(id *)a1;
- (BOOL)testGpsModulated:(id)a0 gpsPrn:(int)a1 error:(id *)a2;
- (BOOL)testPeriodic:(id)a0 error:(id *)a1;
- (BOOL)testPowerMode:(unsigned char)a0 error:(id *)a1;
- (BOOL)testTimeMarkGpio:(id *)a0;

@end
