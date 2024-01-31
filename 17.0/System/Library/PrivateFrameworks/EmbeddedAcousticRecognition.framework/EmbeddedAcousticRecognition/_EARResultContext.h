@class NSDictionary, _EARSpeechRecognitionResultPackage;

@interface _EARResultContext : NSObject

@property (nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } prevBestRecogText;
@property (nonatomic) unsigned long long countOfIsFinalFalseAlreadyWritten;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackage;
@property (retain, nonatomic) NSDictionary *prevMuxPackages;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackageWithoutPersonalization;
@property (nonatomic) BOOL anyResults;
@property (nonatomic) struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper *__ptr_; struct __shared_weak_count *__cntrl_; } continuousListeningResultHelper;
@property (readonly, nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *__value_; } __end_cap_; } partialResults;
@property (readonly, nonatomic) unsigned long long partialResultIndexOffset;
@property (nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *__value_; } __end_cap_; } loggableConcatResult;
@property (nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } loggableConcatCosts;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addPartialResultToContext:(const void *)a0;
- (void)incrementCountOfIsFinalFalseAlreadyWritten;
- (void)resetPartialResultContext;
- (void)updateLoggableResultWithCurrentResult:(const void *)a0 currentCosts:(const void *)a1 startMilliseconds:(unsigned int)a2;

@end
