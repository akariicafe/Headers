@class NSString, NSArray;

@interface _SSBServiceStatus : NSObject {
    struct ServiceStatus { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_name; int m_pid; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } m_activeTransactions; struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *__begin_; struct Connection *__end_; struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *__value_; } __end_cap_; } m_connections; struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *__begin_; struct DatabaseUpdaterStatus *__end_; struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *__value_; } __end_cap_; } m_databaseUpdatersStatuses; } _serviceStatus;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) int processIdentifier;
@property (readonly, copy, nonatomic) NSArray *activeTransactions;
@property (readonly, nonatomic) NSArray *databaseUpdatersStatuses;
@property (readonly, nonatomic) unsigned long long connectionCount;
@property (readonly, nonatomic) unsigned long long databaseUpdaterState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)bundleIdentifierForConnectionAtIndex:(unsigned long long)a0;
- (id)initWithServiceStatus:(struct ServiceStatus { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; int x1; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x2; struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *x0; struct Connection *x1; struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *x0; } x2; } x3; struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *x0; struct DatabaseUpdaterStatus *x1; struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *x0; } x2; } x4; })a0;
- (int)processIdentifierForConnectionAtIndex:(unsigned long long)a0;

@end
