@class NSString;

@interface MAIDiagnosticLogger : NSObject <HAMenstrualAlgorithmsPhaseIngestion>

@property (nonatomic) int notifyToken;
@property (readonly, nonatomic) NSString *baseFileName;
@property (readonly, nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } jsonObjectName;
@property (readonly, nonatomic) NSString *notificationName;
@property (nonatomic) BOOL notifyState;
@property (nonatomic) struct shared_ptr<nlohmann::basic_json<>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } inputJson;
@property (nonatomic) struct shared_ptr<nlohmann::basic_json<>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } outputJson;
@property (nonatomic) struct shared_ptr<std::ofstream> { void *__ptr_; struct __shared_weak_count *__cntrl_; } inputFile;
@property (nonatomic) struct shared_ptr<std::ofstream> { void *__ptr_; struct __shared_weak_count *__cntrl_; } outputFile;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)removeOldFiles;
- (void).cxx_destruct;
- (void)appendDay:(id)a0;
- (void)beginPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (void)endPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;

@end
